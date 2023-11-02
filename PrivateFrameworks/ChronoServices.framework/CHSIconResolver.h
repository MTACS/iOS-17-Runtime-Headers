
@interface CHSIconResolver : NSObject <CHSIconResolving> {
    void iconStore;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveIconForContainerIdentity:(id)arg1 completion:(id /* block */)arg2;
- (id)resolveIconVersionForExtensionIdentity:(id)arg1;

@end
