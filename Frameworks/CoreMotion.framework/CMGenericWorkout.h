
@interface CMGenericWorkout : CMWorkout {
    unsigned long long  fWorkoutLabel;
}

@property (nonatomic, readonly) unsigned long long workoutLabel;

+ (id)genericWorkoutInstance:(id)arg1;
+ (bool)isAvailable;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 workoutLabel:(unsigned long long)arg2;
- (unsigned long long)workoutLabel;

@end
