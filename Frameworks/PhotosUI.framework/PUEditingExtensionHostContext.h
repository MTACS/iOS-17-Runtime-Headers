
@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost> {
    id /* block */  _contentEditingOutputCommitHandler;
    id /* block */  _hideNavigationControllerHandler;
}

@property (copy) id /* block */ contentEditingOutputCommitHandler;
@property (copy) id /* block */ hideNavigationControllerHandler;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id /* block */)contentEditingOutputCommitHandler;
- (id /* block */)hideNavigationControllerHandler;
- (void)setContentEditingOutputCommitHandler:(id /* block */)arg1;
- (void)setHideNavigationController:(bool)arg1;
- (void)setHideNavigationControllerHandler:(id /* block */)arg1;

@end
