
@interface NTKSiderealWaypoint : NSObject <NSSecureCoding> {
    double  _degree;
    long long  _type;
}

@property (nonatomic) double degree;
@property (nonatomic) long long type;

+ (long long)_waypointTypeFromSolarEventType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)waypointFromSolarEvent:(id)arg1;
+ (id)waypointWithType:(long long)arg1 degree:(double)arg2;

- (id)debugDescription;
- (double)degree;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 degree:(double)arg2;
- (id)localizedName;
- (void)setDegree:(double)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
