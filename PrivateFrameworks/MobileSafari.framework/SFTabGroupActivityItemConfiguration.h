
@interface SFTabGroupActivityItemConfiguration : NSObject <UIActivityItemsConfigurationReading> {
    CKShare * _existingShare;
    NSItemProvider * _itemProvider;
    LPLinkMetadata * _linkMetadata;
    NSMutableArray * _pendingShareCompletionHandlers;
    WBTabGroup * _tabGroup;
    WBTabGroupManager * _tabGroupManager;
}

@property (nonatomic, readonly, copy) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly, copy) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBTabGroup *tabGroup;
@property (nonatomic, readonly) WBTabGroupManager *tabGroupManager;

- (void).cxx_destruct;
- (void)_beginSharingTabGroupWithCompletionHandler:(id /* block */)arg1;
- (void)_presentSharedTabGroupsManateePrompt;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;
- (id)activityItemsConfigurationMetadataForKey:(id)arg1;
- (void)dealloc;
- (id)initWithTabGroup:(id)arg1 inTabGroupManager:(id)arg2 existingShare:(id)arg3 icon:(id)arg4;
- (id)itemProvider;
- (id)itemProvidersForActivityItemsConfiguration;
- (id)tabGroup;
- (id)tabGroupManager;
- (void)updateMetadataIcon:(id)arg1;

@end
