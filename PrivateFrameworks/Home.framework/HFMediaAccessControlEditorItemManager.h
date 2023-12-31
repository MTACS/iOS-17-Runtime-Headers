
@interface HFMediaAccessControlEditorItemManager : HFItemManager {
    HFMediaAccessControlEditorItemModule * _accessControlEditorItemModule;
}

@property (nonatomic, readonly) HFMediaAccessControlEditorItemModule *accessControlEditorItemModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)accessControlEditorItemModule;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end
