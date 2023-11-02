
@interface HKWristDetectionSettingManager : NSObject {
    int  _disableWristDetectionSettingChangeNotificationToken;
    NSObject<OS_os_log> * _loggingCategory;
    HKObserverSet * _observers;
    id  _pairedDeviceRegistry;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) id pairedDeviceRegistry;
@property (getter=isWristDetectEnabled, nonatomic, readonly) bool wristDetectEnabled;

+ (bool)isWristDetectEnabled;

- (void).cxx_destruct;
- (id)_activeWatchNotifications;
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;
- (void)_queue_notifyObservers;
- (void)_queue_settingDidChange;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (id)init;
- (id)initWithPairedDeviceRegistry:(id)arg1;
- (bool)isWristDetectEnabled;
- (id)pairedDeviceRegistry;
- (void)registerObserver:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)setPairedDeviceRegistry:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
