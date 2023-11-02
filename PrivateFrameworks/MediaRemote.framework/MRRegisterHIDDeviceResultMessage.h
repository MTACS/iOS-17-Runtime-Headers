
@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long deviceIdentifier;
@property (nonatomic, readonly) long long errorCode;

- (unsigned long long)deviceIdentifier;
- (long long)errorCode;
- (id)initWithErrorCode:(long long)arg1 deviceIdentifier:(unsigned long long)arg2;
- (unsigned long long)type;

@end
