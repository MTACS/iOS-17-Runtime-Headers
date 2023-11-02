
@interface SOExtensionFinder : NSObject {
    NSObject<OS_dispatch_queue> * _extensionFinderQueue;
    id  _matchingContext;
}

- (void).cxx_destruct;
- (id)_soExtensionsForExtensions:(id)arg1;
- (void)beginMatchingExtensionsWithCompletion:(id /* block */)arg1;
- (void)endMatchingExtensions;
- (void)findExtensionWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)findExtensionsWithCompletion:(id /* block */)arg1;
- (id)init;

@end
