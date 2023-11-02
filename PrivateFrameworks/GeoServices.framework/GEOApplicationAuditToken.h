
@interface GEOApplicationAuditToken : NSObject <GEOXPCSerializable, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _entitlementValueCache;
    geo_isolater * _isolater;
    NSString * _overrideOfflineCohortId;
    NSString * _proxiedBundleId;
    bool  _proxiedExternalBundleId;
    NSString * _resolvedBundleId;
    NSString * _resolvedNetworkAttributionBundleId;
    NSString * _secondaryIdentifier;
    NSData * _tokenData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *offlineCohortId;
@property (nonatomic, readonly) NSString *proxiedBundleId;
@property (getter=isProxiedExternalBundleId, nonatomic, readonly) bool proxiedExternalBundleId;
@property (getter=_secondaryIdentifier, nonatomic, readonly, copy) NSString *secondaryIdentifier;
@property (readonly) Class superclass;

+ (id)compositeTokenForTokens:(id)arg1;
+ (id)currentProcessAuditToken;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundleIdForAuditToken;
- (id)_secondaryIdentifier;
- (id)_valueForEntitlement:(id)arg1;
- (id)backingTokenData;
- (id)bundleId;
- (id)bundleIdForNetworkAttribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initCommon;
- (id)initWithAuditTokenData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNSXPCConnection:(id)arg1;
- (id)initWithProxiedApplicationBundleId:(id)arg1;
- (id)initWithProxiedExternalApplicationBundleId:(id)arg1;
- (id)initWithSecondaryIdentifier:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isProxiedExternalBundleId;
- (id)offlineCohortId;
- (id)overrideTokenWithOfflineCohortId:(id)arg1;
- (id)overrideTokenWithProxiedBundleId:(id)arg1;
- (id)proxiedBundleId;
- (id)publicLogDescription;
- (id)valueForEntitlement:(id)arg1;

@end
