
@interface FPSupport_VideoRangeSingleton : NSObject {
    NSObject<OS_dispatch_queue> * _notificationQ;
}

+ (id)sharedFPSupportSingleton;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)postNotification;

@end
