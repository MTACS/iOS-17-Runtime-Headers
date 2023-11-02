
@interface _LSBundleProvider : NSObject {
    void * _provider;
}

@property (readonly) void*provider;

- (id)bundle;
- (id)bundle:(bool)arg1 reason:(id)arg2;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)bundleURL;
- (struct __CFBundle { }*)cfBundleRef;
- (struct __CFBundle { }*)cfBundleRef:(bool)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)infoDictionary;
- (id)initWithCFBundle:(struct __CFBundle { }*)arg1;
- (id)initWithURL:(id)arg1 useCacheIfPossible:(bool)arg2;
- (void*)provider;
- (bool)usingCachedItem;

@end
