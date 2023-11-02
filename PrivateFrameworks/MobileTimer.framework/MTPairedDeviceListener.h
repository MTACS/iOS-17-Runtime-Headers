
@interface MTPairedDeviceListener : NSObject {
    MTObserverStore * _observers;
    NRDevice * _pairedDevice;
    <NAScheduler> * _serializer;
    NSObject<OS_dispatch_queue> * _serializerQueue;
    bool  _sleepEnabled;
}

@property (readonly) bool hasActivePairedDevice;
@property (readonly) bool hasActivePairedDeviceSupportingSyncing;
@property (nonatomic, retain) MTObserverStore *observers;
@property (nonatomic, retain) NRDevice *pairedDevice;
@property (readonly) NSString *pairedDeviceVersion;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serializerQueue;
@property (nonatomic) bool sleepEnabled;

+ (id)_handledNotifications;
+ (id)sharedListener;

- (void).cxx_destruct;
- (void)_registerForLocalNotifications;
- (void)didReceiveNotification:(id)arg1;
- (void)didReceiveNotificationNamed:(id)arg1;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (bool)hasActivePairedDevice;
- (bool)hasActivePairedDeviceCheckSyncing:(bool)arg1;
- (bool)hasActivePairedDeviceSupportingSyncing;
- (id)init;
- (void)notifyObserversWithBlock:(id /* block */)arg1;
- (id)observers;
- (id)pairedDevice;
- (id)pairedDeviceVersion;
- (void)printDiagnostics;
- (void)registerObserver:(id)arg1;
- (id)serializer;
- (id)serializerQueue;
- (void)setObservers:(id)arg1;
- (void)setPairedDevice:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSerializerQueue:(id)arg1;
- (void)setSleepEnabled:(bool)arg1;
- (bool)sleepEnabled;
- (void)updateActiveDeviceInfo;

@end
