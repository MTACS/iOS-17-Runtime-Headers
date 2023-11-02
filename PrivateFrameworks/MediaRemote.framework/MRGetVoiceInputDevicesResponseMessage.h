
@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *deviceIDs;
@property (nonatomic, readonly) long long errorCode;

- (id)deviceIDs;
- (long long)errorCode;
- (id)initWithDeviceIDs:(id)arg1 errorCode:(long long)arg2;
- (unsigned long long)type;

@end
