
@interface APUniversalSingleton : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _singletons;
}

+ (bool)isSingletonSet;
+ (void)resetSingleton;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forSingletonKey:(id)arg2;
- (id)_valueForSingletonKey:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
