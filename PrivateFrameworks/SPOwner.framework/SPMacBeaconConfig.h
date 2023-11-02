
@interface SPMacBeaconConfig : NSObject <NSCopying, NSSecureCoding> {
    double  _fastRollAdvertisementDuration;
    double  _fastRollAdvertisementInterval;
    double  _initialNoBeaconDuration;
    double  _noAdvertisementDurationDecayFactor;
    NSArray * _postInitialDayAdvertisementTimes;
    double  _slowRollAdvertisementDuration;
    double  _slowRollNoAdvertisementDuration;
}

@property (nonatomic) double fastRollAdvertisementDuration;
@property (nonatomic) double fastRollAdvertisementInterval;
@property (nonatomic) double initialNoBeaconDuration;
@property (nonatomic) double noAdvertisementDurationDecayFactor;
@property (nonatomic, copy) NSArray *postInitialDayAdvertisementTimes;
@property (nonatomic) double slowRollAdvertisementDuration;
@property (nonatomic) double slowRollNoAdvertisementDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (double)fastRollAdvertisementDuration;
- (double)fastRollAdvertisementInterval;
- (id)initFromPrefs;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialNoBeaconDuration:(double)arg1 fastRollAdvertisementDuration:(double)arg2 fastRollAdvertisementInterval:(double)arg3 slowRollAdvertisementDuration:(double)arg4 slowRollNoAdvertisementDuration:(double)arg5 noAdvertisementDurationDecayFactor:(double)arg6 postInitialDayAdvertisementTimes:(id)arg7;
- (double)initialNoBeaconDuration;
- (double)noAdvertisementDurationDecayFactor;
- (void)persistToPrefs;
- (id)postInitialDayAdvertisementTimes;
- (void)setFastRollAdvertisementDuration:(double)arg1;
- (void)setFastRollAdvertisementInterval:(double)arg1;
- (void)setInitialNoBeaconDuration:(double)arg1;
- (void)setNoAdvertisementDurationDecayFactor:(double)arg1;
- (void)setPostInitialDayAdvertisementTimes:(id)arg1;
- (void)setSlowRollAdvertisementDuration:(double)arg1;
- (void)setSlowRollNoAdvertisementDuration:(double)arg1;
- (double)slowRollAdvertisementDuration;
- (double)slowRollNoAdvertisementDuration;

@end
