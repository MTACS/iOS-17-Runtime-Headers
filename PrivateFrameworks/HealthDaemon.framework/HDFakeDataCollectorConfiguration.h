
@interface HDFakeDataCollectorConfiguration : NSObject <NSCopying> {
    long long  _activityType;
    HKQuantity * _speed;
}

@property (nonatomic) long long activityType;
@property (nonatomic, copy) HKQuantity *speed;

+ (id)configurationForWorkoutActivityType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)activityType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setActivityType:(long long)arg1;
- (void)setSpeed:(id)arg1;
- (id)speed;

@end
