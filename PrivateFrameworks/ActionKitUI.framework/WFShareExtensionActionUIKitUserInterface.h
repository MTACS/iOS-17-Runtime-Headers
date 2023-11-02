
@interface WFShareExtensionActionUIKitUserInterface : WFEmbeddableActionUserInterface {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)addContentToShareController:(id)arg1 withInput:(id)arg2 inputConfiguration:(id)arg3 extensionUserInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)contentItemClassesFromInputConfiguration:(id)arg1;
- (void)finishWithContentCollection:(id)arg1 error:(id)arg2;
- (id)inputContentItemClassesFromInputConfiguration:(id)arg1;
- (void)performActionWithInput:(id)arg1 inputConfiguration:(id)arg2 socialServiceType:(id)arg3 extensionBundleIdentifier:(id)arg4 extensionUserInfo:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
