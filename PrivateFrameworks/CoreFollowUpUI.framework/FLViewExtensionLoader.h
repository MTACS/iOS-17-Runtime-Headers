
@interface FLViewExtensionLoader : FLHeadlessExtensionLoader {
    UIViewController * _extensionViewController;
}

- (void).cxx_destruct;
- (bool)_setupSessionIfNeeded:(id*)arg1;
- (void)_setupSessionWithExtension:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteViewController;

@end
