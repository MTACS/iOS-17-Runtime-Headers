
@interface NFHWMonitor : NSObject <NFHardwareEventListener> {
    NSObject<OS_dispatch_semaphore> * sem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)hardwareStateDidChange;
- (id)init;
- (long long)waitForNotificationOrTimeout:(unsigned int)arg1;

@end
