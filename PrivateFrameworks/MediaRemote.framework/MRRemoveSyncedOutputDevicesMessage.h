
@interface MRRemoveSyncedOutputDevicesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *outputDeviceUIDs;

- (id)initWithOutputDeviceUID:(id)arg1;
- (id)initWithOutputDeviceUIDs:(id)arg1;
- (id)outputDeviceUIDs;
- (unsigned long long)type;

@end
