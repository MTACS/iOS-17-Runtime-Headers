
@interface _GCControllerManagerServer : _GCControllerManager <_GCDeviceConfigurationRegistry, _GCDeviceRegistry, _GCLogicalDeviceRegistry, _GCPhysicalDeviceRegistry> {
    NSMutableSet * _activeConfigurations;
    NSSet * _activeControllerDevices;
    NSMutableDictionary * _allDeviceManagers;
    NSMutableDictionary * _allDevices;
    NSMutableSet * _configurations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _configurationsLock;
    NSMutableSet * _copilotConfigurations;
    NSArray * _copilotSettings;
    <GCUserDefaults> * _defaults;
    NSMutableDictionary * _hidServiceOwners;
    NSMutableSet * _hidServices;
    NSFileHandle * _lastGeneratedDirectoryHandle;
    NSString * _lastGeneratedName;
    NSURL * _lastGeneratedURL;
    NSMutableDictionary * _logicalDeviceManagers;
    NSMutableDictionary * _logicalDevices;
    NSMutableDictionary * _pendingDriverConnections;
    NSMutableDictionary * _pendingFilterConnections;
    NSMutableDictionary * _physicalDeviceManagers;
    NSMutableDictionary * _physicalDevices;
    NSSet * _pidsWithKeyboardAndMouseSupport;
    GCSSettingsStore * _settingsStore;
}

@property (copy) NSSet *activeControllerDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <_GCDeviceConfigurationRegistry> *deviceConfigurationRegistry;
@property (readonly) unsigned long long hash;
@property (copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (readonly, copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)arg1;
- (id)_hidqueue_popPendingFilterConnectionsForRegistryID:(id)arg1;
- (void)_hidqueue_pushPendingDriverConnection:(id)arg1 forRegistryID:(id)arg2;
- (void)_hidqueue_pushPendingFilterConnection:(id)arg1 forRegistryID:(id)arg2;
- (void)_onqueue_refreshControllers;
- (void)_onqueue_refreshLogicalDevices;
- (void)_onqueue_registerLogicalDevice:(id)arg1;
- (void)_onqueue_registerPhysicalDevice:(id)arg1;
- (void)_onqueue_signalGameControllerFocusModeEvent;
- (void)_onqueue_unregisterLogicalDevice:(id)arg1;
- (void)_onqueue_unregisterPhysicalDevice:(id)arg1;
- (bool)acceptIncomingDriverConnection:(id)arg1;
- (id)activeControllerDevices;
- (bool)addConfiguration:(id)arg1 replaceExisting:(bool)arg2;
- (id)configurationWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)deviceConfigurationRegistry;
- (void)deviceManager:(id)arg1 deviceDidConnect:(id)arg2;
- (void)deviceManager:(id)arg1 deviceDidDisconnect:(id)arg2;
- (void)disableKeyboardAndMouseSupportForPID:(id)arg1;
- (void)driverCheckIn;
- (void)enableKeyboardAndMouseSupportForPID:(id)arg1;
- (bool)getLastGeneratedName:(id*)arg1 directoryHandle:(id*)arg2 url:(id*)arg3;
- (bool)hasConfigurationWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithControllerProfiles:(id)arg1;
- (id)lastGeneratedURL;
- (id)logicalDevices;
- (id)makeHIDEventSource:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient { }*)arg1;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient { }*)arg1;
- (id)pidsWithKeyboardAndMouseSupport;
- (id)pidsWithKeyboardAndMouseSupport;
- (void)refreshActiveConfigurations;
- (void)refreshActiveConfigurationsWithCompletion:(id /* block */)arg1;
- (bool)removeConfigurationWithIdentifier:(id)arg1;
- (void)setActiveControllerDevices:(id)arg1;
- (void)setLastGeneratedName:(id)arg1 directoryHandle:(id)arg2 url:(id)arg3;
- (void)setPidsWithKeyboardAndMouseSupport:(id)arg1;
- (bool)updateConfiguration:(id)arg1;

@end
