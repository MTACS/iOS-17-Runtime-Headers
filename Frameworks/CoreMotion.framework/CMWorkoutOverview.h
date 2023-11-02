
@interface CMWorkoutOverview : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _overviewId;
    NSArray * _workouts;
}

@property (nonatomic, readonly) NSUUID *overviewId;
@property (nonatomic, readonly) NSArray *workouts;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOverviewId:(id)arg1 workouts:(id)arg2;
- (id)overviewId;
- (id)workouts;

@end
