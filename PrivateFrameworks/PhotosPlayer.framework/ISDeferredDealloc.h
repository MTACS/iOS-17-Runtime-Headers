
@interface ISDeferredDealloc : NSObject {
    NSObject<OS_dispatch_queue> * _deferredDeallocQueue;
}

+ (id)sharedInstance;

- (void)_performDeferredDealloc:(id)arg1;
- (void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2;
- (void)dealloc;
- (id)init;

@end
