
@interface CMSwimWorkout : CMWorkout {
    long long  fLocation;
    double  fPoolLength;
}

@property (nonatomic, readonly) long long location;
@property (nonatomic, readonly) double poolLength;

+ (bool)isAvailable;
+ (bool)supportsSecureCoding;
+ (id)swimLocationName:(long long)arg1;
+ (id)swimWorkoutInstance:(id)arg1;

- (id)_initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 location:(long long)arg2 poolLength:(double)arg3;
- (id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3;
- (id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (long long)location;
- (double)poolLength;

@end
