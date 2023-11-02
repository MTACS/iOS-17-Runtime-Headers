
@interface CMBikeSensorData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceIdentifier;
    double  _instantaneousCadence;
    double  _instantaneousPower;
    double  _instantaneousSpeed;
    NSString * _manufacturer;
    NSString * _model;
    double  fTimestamp;
}

@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)isAvailable;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1;
- (double)instantaneousCadence;
- (double)instantaneousPower;
- (double)instantaneousSpeed;
- (id)manufacturer;
- (id)model;
- (id)newFitnessMachineDataFromBikeSensorData;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setInstantaneousCadence:(double)arg1;
- (void)setInstantaneousPower:(double)arg1;
- (void)setInstantaneousSpeed:(double)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (id)timestamp;

@end
