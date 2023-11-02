
@interface PNPDeviceState : NSObject <NSCopying, NSSecureCoding> {
    double  _batteryLevel;
    bool  _batteryLevelUnknown;
    unsigned long long  _edge;
    NSString * _name;
    unsigned long long  _orientation;
}

@property (nonatomic) double batteryLevel;
@property (nonatomic) bool batteryLevelUnknown;
@property (nonatomic) unsigned long long edge;
@property (nonatomic, readonly) bool isLowPower;
@property (nonatomic, readonly) bool isOnLeftOrRightSide;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long orientation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)batteryLevel;
- (bool)batteryLevelUnknown;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)edge;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLowPower;
- (bool)isOnLeftOrRightSide;
- (id)name;
- (unsigned long long)orientation;
- (void)setBatteryLevel:(double)arg1;
- (void)setBatteryLevelUnknown:(bool)arg1;
- (void)setEdge:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;

@end
