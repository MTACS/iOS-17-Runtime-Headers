
@interface IAMICMessageEntryProvider : NSObject <IAMMessageEntryProvider> {
    <IAMMessageEntryProviderDelegate> * _delegate;
    ICInAppMessageManager * _iTunesCloudIAMManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IAMMessageEntryProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleMessagesDidChangeNotification;
- (id)delegate;
- (void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)removeApplicationBadgeForBundleIdentifier:(id)arg1 fromPresentedMessageEntry:(id)arg2 completion:(id /* block */)arg3;
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
