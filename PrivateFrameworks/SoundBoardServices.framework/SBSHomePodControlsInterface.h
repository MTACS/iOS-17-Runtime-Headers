
@interface SBSHomePodControlsInterface : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSHomePodControlsImplementer> * _sbProxy;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)getAllSyncedAlarmsAndTimers:(id /* block */)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (bool)isMediaAlarm:(id)arg1;

@end
