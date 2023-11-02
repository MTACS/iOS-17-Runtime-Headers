
@interface NTKSiderealData : NSObject <NSSecureCoding> {
    float  _altitudes;
    double  _currentSolarDayProgress;
    NSOrderedSet * _daytimeEvents;
    NSData * _gradientData;
    bool  _isConstantSunUpOrDown;
    NSDate * _referenceDate;
    CLLocation * _referenceLocation;
    NSOrderedSet * _sectors;
    NSOrderedSet * _solarEvents;
    CLKUIAlmanacTransitInfo * _sunriseSunsetInfo;
    NSDate * _sunriseTime;
    float  _sunsetFilter;
    bool  _sunsetFilterEnabled;
    float  _sunsetFilterRampDownStartProgress;
    float  _sunsetFilterRampUpStartProgress;
    bool  _sunsetFollowsSunrise;
    NSDate * _sunsetTime;
    bool  _useXR;
    NSArray * _waypoints;
}

@property (nonatomic, readonly) NSOrderedSet *daytimeEvents;
@property (nonatomic, readonly) NSData *gradientData;
@property (nonatomic, readonly) bool isConstantSunUpOrDown;
@property (nonatomic, readonly) NSDate *referenceDate;
@property (nonatomic, readonly) CLLocation *referenceLocation;
@property (nonatomic, readonly) NSOrderedSet *sectors;
@property (nonatomic, readonly) NSOrderedSet *solarEvents;
@property (nonatomic, readonly) CLKUIAlmanacTransitInfo *sunriseSunsetInfo;
@property (nonatomic, readonly) NSDate *sunriseTime;
@property (nonatomic, readonly) bool sunsetFollowsSunrise;
@property (nonatomic, readonly) NSDate *sunsetTime;
@property (nonatomic, readonly) NSArray *waypoints;

+ (id)loadCached;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_computeIsConstantSunUpOrDown;
- (bool)_computeSunsetFollowsSunrise;
- (id)_findSunriseTime;
- (id)_findSunsetTime;
- (id)_generateGradientDataForXR:(bool)arg1;
- (struct { float x1; float x2; float x3; })altitudeForProgress:(double)arg1;
- (id)applySunsetFilterToColor:(id)arg1;
- (id)daytimeEvents;
- (void)encodeWithCoder:(id)arg1;
- (id)gradientData;
- (id)gradientWithSunsetFilterForDayProgress:(float)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2 sunriseSunsetInfo:(id)arg3 solarEvents:(id)arg4 daytimeEvents:(id)arg5 sectors:(id)arg6 waypoints:(id)arg7 altitudes:(float*)arg8 useXR:(bool)arg9;
- (id)interpolateBetweenCalendricalMidnights:(double)arg1;
- (bool)isConstantSunUpOrDown;
- (bool)isDateInReferenceDate:(id)arg1;
- (id)referenceDate;
- (id)referenceLocation;
- (void)save;
- (id)sectors;
- (void)setSolarDayProgress:(double)arg1;
- (id)solarEvents;
- (id)sunriseSunsetInfo;
- (id)sunriseTime;
- (bool)sunsetFollowsSunrise;
- (id)sunsetTime;
- (void)updateSunsetFilter;
- (bool)useXR;
- (id)waypoints;

@end
