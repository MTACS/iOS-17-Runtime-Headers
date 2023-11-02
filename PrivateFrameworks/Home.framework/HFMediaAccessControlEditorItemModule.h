
@interface HFMediaAccessControlEditorItemModule : HFItemModule <HFHomeObserver> {
    HFMediaAccessControlEditorItemProvider * _accessControlEditorItemProvider;
    HMHome * _home;
    NSSet * _itemProviders;
}

@property (nonatomic, readonly) HFMediaAccessControlEditorItemProvider *accessControlEditorItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) Class superclass;

+ (id)_descriptionFooterTextForAccessControlDescriptor:(id)arg1 hasNonPeerToPeerMediaAccessories:(bool)arg2;

- (void).cxx_destruct;
- (bool)_hasNonPeerToPeerMediaAccessories;
- (id)accessControlEditorItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)containsItem:(id)arg1;
- (id)home;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(bool)arg2;
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)updateAccessControlDescriptor:(id)arg1;

@end
