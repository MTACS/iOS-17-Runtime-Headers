
@interface RTVehicle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bluetoothAddress;
    NSDateInterval * _dateInterval;
    NSString * _vehicleModelName;
    NSString * _vehicleName;
}

@property (nonatomic, readonly, copy) NSString *bluetoothAddress;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSString *vehicleModelName;
@property (nonatomic, readonly, copy) NSString *vehicleName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bluetoothAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 vehicleName:(id)arg2 vehicleModelName:(id)arg3 bluetoothAddress:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)vehicleModelName;
- (id)vehicleName;

@end
