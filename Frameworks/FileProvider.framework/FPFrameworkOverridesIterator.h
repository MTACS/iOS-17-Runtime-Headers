
@interface FPFrameworkOverridesIterator : NSProxy {
    unsigned long long  _currentIndex;
    NSInvocation * _invocation;
    id /* block */  _noSuitableModuleFoundHandler;
    NSArray * _overrides;
}

+ (void)addOverride:(id)arg1;
+ (id)allOverrides;
+ (id)newIteratorWithNotFoundHandler:(id /* block */)arg1;
+ (id)overrideDirectoryURL;
+ (void)removeOverride:(id)arg1;

- (void).cxx_destruct;
- (void)callNextOverrides;
- (void)finish;
- (void)forwardInvocation:(id)arg1;
- (id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(id /* block */)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
