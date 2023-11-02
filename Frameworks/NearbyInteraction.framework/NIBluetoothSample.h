
@interface NIBluetoothSample : NSObject <NSCopying, NSSecureCoding> {
    int  _channel;
    NSString * _identifier;
    double  _machContinuousTimeSeconds;
    NSString * _model;
    NSString * _name;
    double  _rssi;
}

@property (readonly) int channel;
@property (readonly) NSString *identifier;
@property (readonly) double machContinuousTimeSeconds;
@property (readonly) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (readonly) double rssi;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBluetoothSample:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRSSI:(double)arg1 identifier:(id)arg2 model:(id)arg3 channel:(int)arg4 machContinuousTimeSeconds:(double)arg5;
- (bool)isEqual:(id)arg1;
- (double)machContinuousTimeSeconds;
- (id)model;
- (id)name;
- (double)rssi;
- (void)setName:(id)arg1;

@end
