
@interface WFShareActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFShareActionUserInterface> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)excludedActivityTypes;
- (void)finishWithExtensionItems:(id)arg1 error:(id)arg2;
- (void)presentActivityViewControllerForItems:(id)arg1 isContentManaged:(bool)arg2;
- (void)presentExtensionViewControllerForItems:(id)arg1 extensionBundleIdentifier:(id)arg2 extensionPointIdentifier:(id)arg3 isContentManaged:(bool)arg4;
- (void)presentItems:(id)arg1 extensionBundleIdentifier:(id)arg2 extensionPointIdentifier:(id)arg3 isContentManaged:(bool)arg4;
- (void)prewarmInput:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithArchivedItems:(id)arg1 isContentManaged:(bool)arg2 extensionBundleIdentifier:(id)arg3 extensionPointIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;

@end
