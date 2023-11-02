
@interface GCSyntheticDeviceManager : NSObject {
    unsigned long long  _3pSyntheticControllerCount;
    struct __CFDictionary { } * _3pSyntheticControllerMatchingCriteria;
    unsigned int  _3pSyntheticControllerPublishedNotification;
    unsigned int  _3pSyntheticControllerTerminatedNotification;
    unsigned int  _connect;
    <GCUserDefaults> * _defaults;
    bool  _disabledByPreference;
    unsigned long long  _kernelClientGeneration;
    struct IONotificationPort { } * _notifyPort;
    NSObject<OS_dispatch_queue> * _queue;
    _GCControllerManagerServer * _server;
    unsigned int  _service;
    GCSSettingsStore * _settingsStore;
    NSMapTable * _syntheticDevices;
    NSObject<OS_dispatch_mach> * _upcallMachChannel;
    unsigned int  _upcallPort;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithServer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
