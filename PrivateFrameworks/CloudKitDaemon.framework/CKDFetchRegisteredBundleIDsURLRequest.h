
@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest {
    id /* block */  _bundleIDsFetchedBlock;
}

@property (nonatomic, copy) id /* block */ bundleIDsFetchedBlock;

- (void).cxx_destruct;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id /* block */)bundleIDsFetchedBlock;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;
- (void)setBundleIDsFetchedBlock:(id /* block */)arg1;
- (id)sourceApplicationSecondaryIdentifier;

@end
