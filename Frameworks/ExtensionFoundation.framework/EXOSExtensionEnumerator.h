
@interface EXOSExtensionEnumerator : NSEnumerator {
    NSArray * _extensionPaths;
    NSEnumerator * _extensionPathsEnumerator;
}

@property (readonly) NSArray *extensionPaths;
@property (readonly) NSEnumerator *extensionPathsEnumerator;

+ (void)enumerateExtensionsInDirectoryAtURL:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)extensionPaths;
- (id)extensionPathsEnumerator;
- (id)initWithCacheURLs:(id)arg1;
- (id)initWithCacheURLs:(id)arg1 paths:(id)arg2;
- (id)nextObject;

@end
