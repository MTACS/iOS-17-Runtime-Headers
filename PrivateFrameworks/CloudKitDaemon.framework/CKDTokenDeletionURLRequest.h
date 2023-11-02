
@interface CKDTokenDeletionURLRequest : CKDURLRequest {
    NSString * _apsEnvironmentString;
    NSData * _apsToken;
    NSString * _bundleID;
}

@property (nonatomic, retain) NSString *apsEnvironmentString;
@property (nonatomic, retain) NSData *apsToken;
@property (nonatomic, retain) NSString *bundleID;

- (void).cxx_destruct;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)apsEnvironmentString;
- (id)apsToken;
- (id)bundleID;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 apsToken:(id)arg2 apsEnvironmentString:(id)arg3 bundleID:(id)arg4;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;
- (void)setApsEnvironmentString:(id)arg1;
- (void)setApsToken:(id)arg1;
- (void)setBundleID:(id)arg1;
- (id)sourceApplicationSecondaryIdentifier;

@end
