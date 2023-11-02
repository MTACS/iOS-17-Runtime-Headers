
@interface CMVehicleStateData : NSObject <NSCopying, NSSecureCoding> {
    CMMotionTimeRange * fTimeRange;
    NSString * fVehicleBluetoothAddress;
    NSString * fVehicleModelName;
    NSString * fVehicleName;
    unsigned long long  fVehicularHints;
    unsigned long long  fVehicularState;
}

@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) CMMotionTimeRange *timeRange;
@property (nonatomic, readonly) NSString *vehicleBluetoothAddress;
@property (nonatomic, readonly) NSString *vehicleModelName;
@property (nonatomic, readonly) NSString *vehicleName;
@property (nonatomic, readonly) unsigned long long vehicularHints;
@property (nonatomic, readonly) unsigned long long vehicularState;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeRange:(id)arg1 vehicleName:(id)arg2 vehicleModelName:(id)arg3 vehicleBluetoothAddress:(id)arg4;
- (id)initWithTimestamp:(id)arg1 state:(unsigned long long)arg2 hints:(unsigned long long)arg3;
- (id)timeRange;
- (id)vehicleBluetoothAddress;
- (id)vehicleModelName;
- (id)vehicleName;
- (unsigned long long)vehicularHints;
- (unsigned long long)vehicularState;

@end
