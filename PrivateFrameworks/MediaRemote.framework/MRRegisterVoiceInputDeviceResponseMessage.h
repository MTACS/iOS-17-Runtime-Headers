
@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int deviceID;
@property (nonatomic, readonly) long long errorCode;

- (unsigned int)deviceID;
- (long long)errorCode;
- (id)initWithDeviceID:(unsigned int)arg1 errorCode:(long long)arg2;
- (unsigned long long)type;

@end
