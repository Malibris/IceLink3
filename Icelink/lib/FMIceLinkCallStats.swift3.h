//
// Title: IceLink CallStats for Cocoa
// Version: 3.2.2.616
// Copyright Frozen Mountain Software 2011+
//

#import <Foundation/Foundation.h>

#import "FMIceLink.swift3.h"

@class FMIceLinkCallStatsClient;
/*!
 * <div>
 * CallStats Client
 * </div>
 */
@interface FMIceLinkCallStatsClient : NSObject

/*!
 * <div>
 * Start a new callstats session.
 * </div>
 * @param connection IceLink connection object.
 * @param userId Local peer identifier.
 * @param deviceId Local device identifier.
 * @param confId Unique conference identifier.
 * @param remoteId Remote peer identifier.
 */
- (void) addConnection:(FMIceLinkConnection*)connection userId:(NSString*)userId deviceId:(NSString*)deviceId confId:(NSString*)confId remoteId:(NSString*)remoteId;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkCallStatsClient class.
 * </div>
 * @param privateKey ECDSA Private Key.
 * @param applicationId CallStats application identifier.
 * @param ecdsaPublicKeyId CallStats ecdsa public key identifier.
 */
+ (FMIceLinkCallStatsClient*) clientWithPrivateKey:(FMIceLinkEcdsaKey*)privateKey applicationId:(NSString*)applicationId ecdsaPublicKeyId:(NSString*)ecdsaPublicKeyId;
/*!
 * <div>
 * Gets the endpoint app version.
 * </div>
 */
- (NSString*) endPointAppVersion;
/*!
 * <div>
 * Gets the endpoint client name [Example : Chrome, Firefox, Android, Java, NET]
 * </div>
 */
- (NSString*) endPointClientName;
/*!
 * <div>
 * Gets the endpoint client version.
 * </div>
 */
- (NSString*) endPointClientVersion;
/*!
 * <div>
 * Gets the endpoint operating system.
 * </div>
 */
- (FMIceLinkOperatingSystem) endPointOS;
/*!
 * <div>
 * Gets the endpoint operating system version.
 * </div>
 */
- (NSString*) endPointOSVersion;
/*!
 * <div>
 * Gets the endpoint type. [Valid values: "browser", "native", "middlebox", "plugin"]
 * </div>
 */
- (NSString*) endPointType;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkCallStatsClient class.
 * </div>
 * @param privateKey ECDSA Private Key.
 * @param applicationId CallStats application identifier.
 * @param ecdsaPublicKeyId CallStats ecdsa public key identifier.
 */
- (instancetype) initWithPrivateKey:(FMIceLinkEcdsaKey*)privateKey applicationId:(NSString*)applicationId ecdsaPublicKeyId:(NSString*)ecdsaPublicKeyId;
/*!
 * <div>
 * Sets the endpoint app version.
 * </div>
 */
- (void) setEndPointAppVersion:(NSString*)value;
/*!
 * <div>
 * Sets the endpoint client name [Example : Chrome, Firefox, Android, Java, NET]
 * </div>
 */
- (void) setEndPointClientName:(NSString*)value;
/*!
 * <div>
 * Sets the endpoint client version.
 * </div>
 */
- (void) setEndPointClientVersion:(NSString*)value;
/*!
 * <div>
 * Sets the endpoint operating system.
 * </div>
 */
- (void) setEndPointOS:(FMIceLinkOperatingSystem)value;
/*!
 * <div>
 * Sets the endpoint operating system version.
 * </div>
 */
- (void) setEndPointOSVersion:(NSString*)value;
/*!
 * <div>
 * Sets the endpoint type. [Valid values: "browser", "native", "middlebox", "plugin"]
 * </div>
 */
- (void) setEndPointType:(NSString*)value;
/*!
 * <div>
 * Sets the conference stats interval in seconds. [Default: 10 secs]
 * </div>
 */
- (void) setStatsInterval:(int)value;
/*!
 * <div>
 * Sets the JWT token validity in minutes. [Default: 5 mins]
 * </div><value>
 * JWT token validity
 * </value>
 */
- (void) setTokenValidity:(int)value;
/*!
 * <div>
 * Gets the conference stats interval in seconds. [Default: 10 secs]
 * </div>
 */
- (int) statsInterval;
/*!
 * <div>
 * Gets the JWT token validity in minutes. [Default: 5 mins]
 * </div><value>
 * JWT token validity
 * </value>
 */
- (int) tokenValidity;

@end

