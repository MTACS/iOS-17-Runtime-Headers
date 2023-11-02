
@interface CNUIContactsAuthorizationStore : NSObject <CNUIContactsAuthorizationModelFetching, CNUIContactsAuthorizationModelSaving> {
    NSString * _bundleIdentifier;
    <CNUICoreRemoteApplicationIconFetching> * _iconFetcher;
    <CNTCCSettings> * _tccSettings;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUICoreRemoteApplicationIconFetching> *iconFetcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNTCCSettings> *tccSettings;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)contactsAuthorizationModel;
- (id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(id)arg1;
- (id)iconFetcher;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)recordForBundleIdentifier:(id)arg1;
- (id)records;
- (id)saveContactsAuthorizationModel:(id)arg1;
- (id)tccSettings;

@end
