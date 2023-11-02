
@interface PRRoseSolution : NSObject <NSCopying, NSSecureCoding> {
    long long  _antenna_type;
    double  _az_deg;
    double  _az_unc_deg;
    bool  _az_valid;
    double  _el_deg;
    double  _el_unc_deg;
    bool  _el_valid;
    double  _fov_confidence;
    unsigned long long  _mac_addr;
    double  _mach_absolute_time_sec;
    double  _mach_continuous_time_sec;
    bool  _mach_continuous_time_valid;
    double  _multipath_probability;
    bool  _multipath_probability_valid;
    bool  _previous_solution_is_bad;
    double  _range_m;
    double  _range_unc_m;
    double  _soi_rssi_dbm;
    bool  _soi_rssi_valid;
    double  _sweep_angle_deg;
    bool  _sweep_angle_valid;
    double  _track_score;
    bool  _track_score_valid;
    long long  _variant;
}

@property (nonatomic, readonly) long long antenna_type;
@property (nonatomic, readonly) double az_deg;
@property (nonatomic, readonly) double az_unc_deg;
@property (nonatomic, readonly) bool az_valid;
@property (nonatomic, readonly) double el_deg;
@property (nonatomic, readonly) double el_unc_deg;
@property (nonatomic, readonly) bool el_valid;
@property (nonatomic, readonly) double fov_confidence;
@property (nonatomic, readonly) unsigned long long mac_addr;
@property (nonatomic, readonly) double mach_absolute_time_sec;
@property (nonatomic, readonly) double mach_continuous_time_sec;
@property (nonatomic, readonly) bool mach_continuous_time_valid;
@property (nonatomic, readonly) double multipath_probability;
@property (nonatomic, readonly) bool multipath_probability_valid;
@property (nonatomic, readonly) bool previous_solution_is_bad;
@property (nonatomic, readonly) double range_m;
@property (nonatomic, readonly) double range_unc_m;
@property (nonatomic, readonly) double soi_rssi_dbm;
@property (nonatomic, readonly) bool soi_rssi_valid;
@property (nonatomic, readonly) double sweep_angle_deg;
@property (nonatomic, readonly) bool sweep_angle_valid;
@property (nonatomic, readonly) double track_score;
@property (nonatomic, readonly) bool track_score_valid;
@property (nonatomic, readonly) long long variant;

+ (bool)supportsSecureCoding;

- (long long)antenna_type;
- (double)az_deg;
- (double)az_unc_deg;
- (bool)az_valid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)el_deg;
- (double)el_unc_deg;
- (bool)el_valid;
- (void)encodeWithCoder:(id)arg1;
- (double)fov_confidence;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariant:(long long)arg1 macAddr:(unsigned long long)arg2 machAbsTime_sec:(double)arg3 machContTimeValid:(bool)arg4 machContTime_sec:(double)arg5 range_m:(double)arg6 rangeUnc_m:(double)arg7 azValid:(bool)arg8 elValid:(bool)arg9 az_deg:(double)arg10 el_deg:(double)arg11 azUnc_deg:(double)arg12 elUnc_deg:(double)arg13 fovConfidence:(double)arg14 soiRssiValid:(bool)arg15 soiRssi_dBm:(double)arg16 antennaType:(long long)arg17 prevSolutionIsBad:(bool)arg18 trackScoreValid:(bool)arg19 trackScore:(double)arg20 sweepAngleValid:(bool)arg21 sweepAngle_deg:(double)arg22 multipathProbabilityValid:(bool)arg23 multipathProbability:(double)arg24;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mac_addr;
- (double)mach_absolute_time_sec;
- (double)mach_continuous_time_sec;
- (bool)mach_continuous_time_valid;
- (double)multipath_probability;
- (bool)multipath_probability_valid;
- (bool)previous_solution_is_bad;
- (double)range_m;
- (double)range_unc_m;
- (double)soi_rssi_dbm;
- (bool)soi_rssi_valid;
- (double)sweep_angle_deg;
- (bool)sweep_angle_valid;
- (double)track_score;
- (bool)track_score_valid;
- (long long)variant;

@end
