
@interface CSRemoteDarwinDeviceInfo : NSObject {
    NSMutableDictionary * _deviceUIDMapTable;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableOrderedSet * _voiceTriggerEnabledDevices;
}

@property (nonatomic, retain) NSMutableDictionary *deviceUIDMapTable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableOrderedSet *voiceTriggerEnabledDevices;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_isRemoteDarwinConnectedWithUUID:(id)arg1;
- (void)addDeviceIDPairToMapTable:(id)arg1 withDeviceUID:(id)arg2;
- (void)allDeviceDisconnected;
- (void)deviceConnectedWithUUID:(id)arg1;
- (void)deviceDisconnectedWithUUID:(id)arg1;
- (id)deviceUIDMapTable;
- (id)fetchDeviceUUIDStringFromUID:(id)arg1;
- (id)fetchRichDeviceUIDStringFromUUID:(id)arg1;
- (bool)hasDarwinDeviceConnected;
- (bool)hasDarwinDeviceHandleVoiceTrigger;
- (id)init;
- (bool)isPrimaryVoiceTriggerDeviceWithUUID:(id)arg1;
- (bool)isRemoteDarwinConnectedWithUUID:(id)arg1;
- (void)notifyVoiceTriggerDisabledWithDeviceUUID:(id)arg1;
- (void)notifyVoiceTriggerEnabledWithDeviceUUID:(id)arg1;
- (id)queue;
- (void)setDeviceUIDMapTable:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVoiceTriggerEnabledDevices:(id)arg1;
- (id)voiceTriggerEnabledDevices;

@end
