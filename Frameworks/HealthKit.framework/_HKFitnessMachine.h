
@interface _HKFitnessMachine : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _activityType;
    NSString * _brand;
    HKDevice * _device;
    NSUUID * _identifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) NSString *brand;
@property (nonatomic, readonly) HKDevice *device;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setActivityType:(unsigned long long)arg1;
- (void)_setBrand:(id)arg1;
- (void)_setDevice:(id)arg1;
- (unsigned long long)activityType;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
