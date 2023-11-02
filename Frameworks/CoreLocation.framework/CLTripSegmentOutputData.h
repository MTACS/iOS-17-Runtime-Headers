
@interface CLTripSegmentOutputData : NSObject <NSCopying, NSSecureCoding> {
    double  _distanceUnc_m;
    double  _distance_m;
    double  _duration_s;
    NSDate * _endDate;
    bool  _isFinalPart;
    long long  _modeOfTransport;
    NSDate * _startDate;
    NSArray * _tripLocations;
    NSUUID * _tripSegmentID;
}

@property (nonatomic) double distanceUnc_m;
@property (nonatomic) double distance_m;
@property (nonatomic) double duration_s;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool isFinalPart;
@property (nonatomic, readonly) long long modeOfTransport;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) NSArray *tripLocations;
@property (readonly) NSUUID *tripSegmentID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)distanceUnc_m;
- (double)distance_m;
- (double)duration_s;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithTripSegmentID:(id)arg1 isFinalPart:(bool)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 modeOfTransport:(long long)arg6 distance:(double)arg7 distanceUnc:(double)arg8 tripLocations:(id)arg9;
- (bool)isFinalPart;
- (long long)modeOfTransport;
- (void)setDistanceUnc_m:(double)arg1;
- (void)setDistance_m:(double)arg1;
- (void)setDuration_s:(double)arg1;
- (id)startDate;
- (id)tripLocations;
- (id)tripSegmentID;

@end
