
@interface WFCompactUnlockService : NSObject {
    SBSLockScreenService * _service;
}

@property (nonatomic, retain) SBSLockScreenService *service;

+ (bool)isDeviceLocked;

- (void).cxx_destruct;
- (void)dealloc;
- (void)requestUnlockIfNeeded:(id /* block */)arg1;
- (id)service;
- (void)setService:(id)arg1;

@end
