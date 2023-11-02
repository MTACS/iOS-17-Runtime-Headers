
@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener> {
    bool  _internalHasBeenUnlockedSinceBoot;
    <NAScheduler> * _workScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool internalHasBeenUnlockedSinceBoot;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NAScheduler> *workScheduler;

+ (bool)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
+ (bool)hasBeenUnlockedSinceBoot;
+ (id)sharedDeviceListener;

- (void).cxx_destruct;
- (bool)_hasBeenUnlockedSinceBoot;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)init;
- (bool)internalHasBeenUnlockedSinceBoot;
- (void)printDiagnostics;
- (void)setInternalHasBeenUnlockedSinceBoot:(bool)arg1;
- (void)setWorkScheduler:(id)arg1;
- (id)workScheduler;

@end
