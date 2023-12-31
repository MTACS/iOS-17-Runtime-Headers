
@interface IMSingletonProxy : NSProxy {
    Class  _overrideClass;
    id  _singleton;
    id  _singletonOverride;
}

+ (void)initialize;

- (void).cxx_destruct;
- (bool)__isSingletonProxy__im;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSingleton:(id)arg1 singletonOverride:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setSingletonOverride:(id)arg1;
- (id)singletonOverrideRef;
- (id)singletonRef;

@end
