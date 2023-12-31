
@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SUUIPassbookLoaderDelegate> {
    SUUIPassbookLoader * _passbookLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_loadPassbookPassWithURL:(id)arg1;
- (void)_parentViewControllerChangeNotification:(id)arg1;
- (void)_reloadVisibility;
- (void)dealloc;
- (void)destroyNativeObject;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)setScriptObject:(id)arg1;
- (void)setupNativeObject;

@end
