
@interface ATXBluetoothDuetEvent : ATXDuetEvent <NSSecureCoding> {
    long long  _bluetoothState;
    NSString * _deviceIdentifier;
    NSString * _deviceName;
    long long  _deviceType;
}

@property (nonatomic, readonly) long long bluetoothState;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long deviceType;

+ (id)convertActiveBluetoothDisconnectedEventIntoInactiveBluetoothConnectedEvent:(id)arg1;
+ (long long)deviceTypeFromBluetoothDeviceType:(id)arg1;
+ (id)mostRecentOrActiveBluetoothConnectedEventFromCurrentContextStoreValues;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)bluetoothState;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (id)deviceIdentifier;
- (id)deviceName;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBluetoothState:(long long)arg1 deviceType:(long long)arg2 deviceName:(id)arg3 hardwareAddress:(id)arg4 startDate:(id)arg5 endDate:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;

@end
