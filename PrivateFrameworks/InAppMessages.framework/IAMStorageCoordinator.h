
@interface IAMStorageCoordinator : NSObject <IAMMessageEntryProviderDelegate> {
    <IAMStorageCoordinatorDelegate> * _delegate;
    IAMICStorageProvider * _iTunesCloudStorageProvider;
    NSSet * _messageBundleIdentifiers;
    <IAMMessageEntryProvider> * _messageEntryProvider;
    <IAMMessageMetadataStorage> * _messageMetadataStorage;
    <IAMPropertyStorage> * _propertyStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IAMStorageCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IAMICStorageProvider *iTunesCloudStorageProvider;
@property (readonly) Class superclass;

+ (id)_propertyNameForGlobalPresentationPolicyGroupLastDisplayTime:(int)arg1;

- (void).cxx_destruct;
- (void)_fetchLastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg1 completion:(id /* block */)arg2;
- (void)_fetchMessageEntries:(id /* block */)arg1;
- (void)_fetchMessagesMetadata:(id /* block */)arg1;
- (void)_updateLastDisplayTime:(id)arg1 forGlobalPresentationPolicyGroup:(int)arg2;
- (id)delegate;
- (void)downloadResourcesForMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchGlobalPresentationPolicyGroupDisplayTimes:(id /* block */)arg1;
- (void)fetchMessagesEntriesAndMetadata:(id /* block */)arg1;
- (id)iTunesCloudStorageProvider;
- (id)initWithMessageEntryProvider:(id)arg1 messageMetadataStorage:(id)arg2 propertyStorage:(id)arg3 messageBundleIdentifiers:(id)arg4;
- (void)messageEntriesDidChange:(id)arg1;
- (void)removeApplicationBadgeFromMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)removeMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)updateLastDisplayTimeGlobalPresentationPolicyGroupNormal:(id)arg1;
- (void)updateLastDisplayTimeGlobalPresentationPolicyGroupRestricted:(id)arg1;
- (void)updateMetadata:(id)arg1 forMessageEntry:(id)arg2 completion:(id /* block */)arg3;

@end
