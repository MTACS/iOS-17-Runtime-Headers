
@interface ATXBluetoothDisconnectedTrigger : NSObject <ATXTrigger> {
    NSString * _deviceIdentifier;
    NSString * _deviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1 deviceName:(id)arg2;
- (long long)type;

@end
