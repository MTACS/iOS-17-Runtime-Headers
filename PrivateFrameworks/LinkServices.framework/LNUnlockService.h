
@interface LNUnlockService : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    SBSLockScreenService * _service;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) SBSLockScreenService *service;

+ (bool)isDeviceLocked;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)requestUnlockIfNeeded:(id /* block */)arg1;
- (id)service;
- (void)setQueue:(id)arg1;
- (void)setService:(id)arg1;

@end
