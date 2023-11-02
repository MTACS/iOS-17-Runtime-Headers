
@interface WKMouseDeviceObserver : NSObject <BKSMousePointerDeviceObserver> {
    struct OSObjectPtr<NSObject<OS_dispatch_queue> *> { 
        NSObject<OS_dispatch_queue> *m_ptr; 
    }  _deviceObserverTokenQueue;
    bool  _hasMouseDevice;
    unsigned long long  _startCount;
    struct RetainPtr<id<BSInvalidatable>> { 
        void *m_ptr; 
    }  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMouseDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setHasMouseDeviceForTesting:(bool)arg1;
- (bool)hasMouseDevice;
- (id)init;
- (void)mousePointerDevicesDidChange:(id)arg1;
- (void)start;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (void)stopWithCompletionHandler:(id /* block */)arg1;

@end
