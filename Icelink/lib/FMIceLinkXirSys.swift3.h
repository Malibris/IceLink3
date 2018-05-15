//
// Title: IceLink XirSys Extension for Cocoa
// Version: 3.2.2.616
// Copyright Frozen Mountain Software 2011+
//

#import <Foundation/Foundation.h>

#import "FMIceLink.swift3.h"

@class FMIceLinkXirSysV2Client;
@class FMIceLinkXirSysV3Client;
/*!
 * <div>
 * A XirSys v2 client.
 * </div>
 */
@interface FMIceLinkXirSysV2Client : NSObject

/*!
 * <div>
 * Gets the "application" value.
 * Defaults to "default".
 * </div>
 */
- (NSString*) application;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 */
+ (FMIceLinkXirSysV2Client*) clientWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 * @param application The "application" value.
 */
+ (FMIceLinkXirSysV2Client*) clientWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain application:(NSString*)application;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 * @param application The "application" value.
 * @param room The "room" value.
 */
+ (FMIceLinkXirSysV2Client*) clientWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain application:(NSString*)application room:(NSString*)room;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 * @param application The "application" value.
 * @param room The "room" value.
 * @param secure The "secure" value.
 */
+ (FMIceLinkXirSysV2Client*) clientWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain application:(NSString*)application room:(NSString*)room secure:(bool)secure;
/*!
 * <div>
 * Gets the default HTTP endpoint.
 * Defaults to "https://service.xirsys.com/ice".
 * </div>
 */
+ (NSString*) defaultEndpoint;
/*!
 * <div>
 * Gets the "domain" value.
 * </div>
 */
- (NSString*) domain;
/*!
 * <div>
 * Gets the HTTP endpoint.
 * </div>
 */
- (NSString*) endpoint;
/*!
 * <div>
 * Gets an array of XirSys ICE servers.
 * </div>
 * @return
 */
- (FMIceLinkFuture*) getIceServers;
/*!
 * <div>
 * Gets the "ident" value.
 * </div>
 */
- (NSString*) ident;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 */
- (instancetype) initWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 * @param application The "application" value.
 */
- (instancetype) initWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain application:(NSString*)application;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 * @param application The "application" value.
 * @param room The "room" value.
 */
- (instancetype) initWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain application:(NSString*)application room:(NSString*)room;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV2Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param domain The "domain" value.
 * @param application The "application" value.
 * @param room The "room" value.
 * @param secure The "secure" value.
 */
- (instancetype) initWithIdent:(NSString*)ident secret:(NSString*)secret domain:(NSString*)domain application:(NSString*)application room:(NSString*)room secure:(bool)secure;
/*!
 * <div>
 * Gets the "room" value.
 * Defaults to "default".
 * </div>
 */
- (NSString*) room;
/*!
 * <div>
 * Gets the "secret" value.
 * </div>
 */
- (NSString*) secret;
/*!
 * <div>
 * Gets the "secure" value.
 * Defaults to <code>true</code>.
 * </div>
 */
- (bool) secure;
/*!
 * <div>
 * Sets the "application" value.
 * Defaults to "default".
 * </div>
 */
- (void) setApplication:(NSString*)value;
/*!
 * <div>
 * Sets the default HTTP endpoint.
 * Defaults to "https://service.xirsys.com/ice".
 * </div>
 */
+ (void) setDefaultEndpoint:(NSString*)value;
/*!
 * <div>
 * Sets the "domain" value.
 * </div>
 */
- (void) setDomain:(NSString*)value;
/*!
 * <div>
 * Sets the HTTP endpoint.
 * </div>
 */
- (void) setEndpoint:(NSString*)value;
/*!
 * <div>
 * Sets the "ident" value.
 * </div>
 */
- (void) setIdent:(NSString*)value;
/*!
 * <div>
 * Sets the "room" value.
 * Defaults to "default".
 * </div>
 */
- (void) setRoom:(NSString*)value;
/*!
 * <div>
 * Sets the "secret" value.
 * </div>
 */
- (void) setSecret:(NSString*)value;
/*!
 * <div>
 * Sets the "secure" value.
 * Defaults to <code>true</code>.
 * </div>
 */
- (void) setSecure:(bool)value;

@end

/*!
 * <div>
 * A XirSys v3 client.
 * </div>
 */
@interface FMIceLinkXirSysV3Client : NSObject

/*!
 * <div>
 * Gets the "channel" value.
 * </div>
 */
- (NSString*) channel;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV3Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param channel The "channel" value.
 */
+ (FMIceLinkXirSysV3Client*) clientWithIdent:(NSString*)ident secret:(NSString*)secret channel:(NSString*)channel;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV3Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param channel The "channel" value.
 * @param secure The "secure" value.
 */
+ (FMIceLinkXirSysV3Client*) clientWithIdent:(NSString*)ident secret:(NSString*)secret channel:(NSString*)channel secure:(bool)secure;
/*!
 * <div>
 * Gets the default HTTP endpoint.
 * Defaults to "https://global.xirsys.net/_turn".
 * </div>
 */
+ (NSString*) defaultEndpoint;
/*!
 * <div>
 * Gets the HTTP endpoint.
 * </div>
 */
- (NSString*) endpoint;
/*!
 * <div>
 * Gets an array of XirSys ICE servers.
 * </div>
 * @return
 */
- (FMIceLinkFuture*) getIceServers;
/*!
 * <div>
 * Gets the "ident" value.
 * </div>
 */
- (NSString*) ident;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV3Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param channel The "channel" value.
 */
- (instancetype) initWithIdent:(NSString*)ident secret:(NSString*)secret channel:(NSString*)channel;
/*!
 * <div>
 * Initializes a new instance of the FMIceLinkXirSysV3Client class.
 * </div>
 * @param ident The "ident" value.
 * @param secret The "secret" value.
 * @param channel The "channel" value.
 * @param secure The "secure" value.
 */
- (instancetype) initWithIdent:(NSString*)ident secret:(NSString*)secret channel:(NSString*)channel secure:(bool)secure;
/*!
 * <div>
 * Gets the "secret" value.
 * </div>
 */
- (NSString*) secret;
/*!
 * <div>
 * Gets the "secure" value.
 * Defaults to <code>true</code>.
 * </div>
 */
- (bool) secure;
/*!
 * <div>
 * Sets the "channel" value.
 * </div>
 */
- (void) setChannel:(NSString*)value;
/*!
 * <div>
 * Sets the default HTTP endpoint.
 * Defaults to "https://global.xirsys.net/_turn".
 * </div>
 */
+ (void) setDefaultEndpoint:(NSString*)value;
/*!
 * <div>
 * Sets the HTTP endpoint.
 * </div>
 */
- (void) setEndpoint:(NSString*)value;
/*!
 * <div>
 * Sets the "ident" value.
 * </div>
 */
- (void) setIdent:(NSString*)value;
/*!
 * <div>
 * Sets the "secret" value.
 * </div>
 */
- (void) setSecret:(NSString*)value;
/*!
 * <div>
 * Sets the "secure" value.
 * Defaults to <code>true</code>.
 * </div>
 */
- (void) setSecure:(bool)value;

@end

