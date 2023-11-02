
@interface HDHealthStoreClient : NSObject {
    HDXPCClient * _XPCClient;
    HDClientAuthorizationOracle * _authorizationOracle;
    HKHealthStoreConfiguration * _configuration;
    NSString * _defaultSourceBundleIdentifier;
    HDProfile * _profile;
    NSString * _sourceBundleIdentifier;
    NSString * _sourceVersion;
}

@property (readonly) HDXPCClient *XPCClient;
@property (readonly) HDClientAuthorizationOracle *authorizationOracle;
@property (readonly, copy) HKHealthStoreConfiguration *configuration;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *defaultSourceBundleIdentifier;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) HDXPCProcess *process;
@property (readonly) HDProfile *profile;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly, copy) NSString *sourceVersion;

- (void).cxx_destruct;
- (id)XPCClient;
- (id)authorizationOracle;
- (id)baseDataEntityEncodingOptions;
- (id)configuration;
- (id)connection;
- (id)defaultSourceBundleIdentifier;
- (id)entitlements;
- (id)filterWithQueryFilter:(id)arg1 objectType:(id)arg2;
- (bool)hasArrayEntitlement:(id)arg1 containing:(id)arg2;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasPrivateMetadataAccess;
- (bool)hasRequiredArrayEntitlement:(id)arg1 containing:(id)arg2 error:(id*)arg3;
- (bool)hasRequiredEntitlement:(id)arg1 error:(id*)arg2;
- (id)initWithXPCClient:(id)arg1 configuration:(id)arg2 profile:(id)arg3;
- (id)process;
- (id)profile;
- (bool)shouldBypassAuthorization;
- (id)sourceBundleIdentifier;
- (id)sourceVersion;
- (id)valueForEntitlement:(id)arg1;
- (bool)verifyHealthRecordsPermissionGrantedWithError:(id*)arg1;

@end
