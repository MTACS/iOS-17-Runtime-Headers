
@interface CSBluetoothManager : NSObject {
    struct BTAccessoryManagerImpl { } * _accessoryManager;
    struct BTSessionImpl { } * _bluetoothSession;
    NSObject<OS_dispatch_group> * _bluetoothSessionSetupGroup;
    NSArray * _connectedDeviceAddresses;
    NSMutableDictionary * _deviceAddressToDeviceInfoMap;
    bool  _isAttachingBluetoothSession;
    struct BTLocalDeviceImpl { } * _localDevice;
    NSHashTable * _observers;
    NSArray * _pairedDeviceAddresses;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) struct BTAccessoryManagerImpl { }*accessoryManager;
@property (nonatomic) struct BTSessionImpl { }*bluetoothSession;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup;
@property (nonatomic, retain) NSArray *connectedDeviceAddresses;
@property (nonatomic, retain) NSMutableDictionary *deviceAddressToDeviceInfoMap;
@property (nonatomic) bool isAttachingBluetoothSession;
@property (nonatomic) struct BTLocalDeviceImpl { }*localDevice;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSArray *pairedDeviceAddresses;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_attachBluetoothSession;
- (void)_clearBluetoothDeviceInfoForDevice:(struct BTDeviceImpl { }*)arg1;
- (void)_detachBluetoothSession;
- (void)_fetchAllConnectedDevices;
- (id)_getAddressWithBTDevice:(struct BTDeviceImpl { }*)arg1;
- (id)_getConnectedBluetoothDeviceAddressesFromLocalDevice:(struct BTLocalDeviceImpl { }*)arg1;
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl { }*)arg1;
- (void)_loadAACPCapabilityForDevice:(struct BTDeviceImpl { }*)arg1 deviceAddress:(id)arg2;
- (void)_sessionAttached:(struct BTSessionImpl { }*)arg1 result:(int)arg2;
- (void)_sessionDetached:(struct BTSessionImpl { }*)arg1;
- (void)_sessionTerminated:(struct BTSessionImpl { }*)arg1;
- (id)_setBluetoothDeviceInfoForDevice:(struct BTDeviceImpl { }*)arg1;
- (void)_setUpAccessoryManager;
- (void)_setUpLocalDevice;
- (void)_tearDownAccessoryManager;
- (void)_tearDownLocalDevice;
- (struct BTAccessoryManagerImpl { }*)accessoryManager;
- (void)accessoryManager:(struct BTAccessoryManagerImpl { }*)arg1 accessoryEvent:(int)arg2 device:(struct BTDeviceImpl { }*)arg3 accessoryState:(int)arg4;
- (struct BTSessionImpl { }*)bluetoothSession;
- (id)bluetoothSessionSetupGroup;
- (id)connectedDeviceAddresses;
- (void)device:(struct BTDeviceImpl { }*)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;
- (id)deviceAddressToDeviceInfoMap;
- (void)getBTLocalDeviceWithCompletion:(id /* block */)arg1;
- (id)getBluetoothDeviceInfoForDeviceWithId:(id)arg1;
- (void)getConnectedBluetoothDeviceAddressesWithCompletion:(id /* block */)arg1;
- (void)getWirelessSplitterInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isAttachingBluetoothSession;
- (struct BTLocalDeviceImpl { }*)localDevice;
- (void)localDevice:(struct BTLocalDeviceImpl { }*)arg1 event:(int)arg2 result:(int)arg3;
- (id)observers;
- (id)pairedDeviceAddresses;
- (id)queue;
- (void)setAccessoryManager:(struct BTAccessoryManagerImpl { }*)arg1;
- (void)setBluetoothSession:(struct BTSessionImpl { }*)arg1;
- (void)setBluetoothSessionSetupGroup:(id)arg1;
- (void)setConnectedDeviceAddresses:(id)arg1;
- (void)setDeviceAddressToDeviceInfoMap:(id)arg1;
- (void)setIsAttachingBluetoothSession:(bool)arg1;
- (void)setLocalDevice:(struct BTLocalDeviceImpl { }*)arg1;
- (void)setObservers:(id)arg1;
- (void)setPairedDeviceAddresses:(id)arg1;
- (void)setQueue:(id)arg1;

@end
