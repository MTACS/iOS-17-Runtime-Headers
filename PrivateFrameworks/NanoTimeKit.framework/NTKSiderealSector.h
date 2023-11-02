
@interface NTKSiderealSector : NSObject <NSSecureCoding> {
    NTKSiderealSolarEvent * _endingEvent;
    void _gradientEndPoint;
    void _gradientStartPoint;
    NSString * _localizedName;
    NTKSiderealSolarEvent * _startingEvent;
    unsigned long long  _type;
}

@property (nonatomic, retain) NTKSiderealSolarEvent *endingEvent;
@property (nonatomic) void gradientEndPoint;
@property (nonatomic) void gradientStartPoint;
@property (nonatomic, retain) NTKSiderealSolarEvent *startingEvent;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endingEvent;
- (void)gradientEndPoint;
- (void)gradientStartPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingEvent:(id)arg1 endingEvent:(id)arg2;
- (id)localizedName;
- (void)setEndingEvent:(id)arg1;
- (void)setGradientEndPoint;
- (void)setGradientStartPoint;
- (void)setStartingEvent:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)startingEvent;
- (unsigned long long)type;

@end
