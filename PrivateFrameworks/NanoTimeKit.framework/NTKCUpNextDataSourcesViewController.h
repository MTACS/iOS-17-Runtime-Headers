
@interface NTKCUpNextDataSourcesViewController : PSListController <NTKCUpNextDataSourcesManagerIdentifiersDelegate> {
    NTKCUpNextDataSourcesManager * _dataSourcesManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceEnabled:(id)arg1;
- (void)_disabledDataSourcesDidChange;
- (void)_setAndResizeIconImage:(id)arg1 forSpecifier:(id)arg2;
- (void)_setDataSourceEnabled:(id)arg1 withSpecifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)manager:(id)arg1 didUpdateDataSourceEntries:(id)arg2;
- (id)specifiers;

@end
