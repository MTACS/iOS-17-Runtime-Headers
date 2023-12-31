
@interface base_durationInput : NSObject <MLFeatureProvider> {
    double  _classic_time_between_uses_med_dur_1;
    double  _classic_time_between_uses_med_dur_2;
    double  _classic_time_between_uses_med_dur_24;
    double  _classic_time_between_uses_med_dur_4;
    double  _classic_time_between_uses_std_dur_1;
    double  _classic_time_between_uses_std_dur_2;
    double  _classic_time_between_uses_std_dur_24;
    double  _classic_time_between_uses_std_dur_4;
    double  _hour;
    double  _hour_plus_0;
    double  _hour_plus_1;
    double  _hour_plus_2;
    double  _hour_plus_3;
    double  _hour_plus_4;
    double  _hour_plus_5;
    double  _hours_until_use;
    double  _is_weekend;
    double  _meaningful_undercharge_rolling_average;
}

@property (nonatomic) double classic_time_between_uses_med_dur_1;
@property (nonatomic) double classic_time_between_uses_med_dur_2;
@property (nonatomic) double classic_time_between_uses_med_dur_24;
@property (nonatomic) double classic_time_between_uses_med_dur_4;
@property (nonatomic) double classic_time_between_uses_std_dur_1;
@property (nonatomic) double classic_time_between_uses_std_dur_2;
@property (nonatomic) double classic_time_between_uses_std_dur_24;
@property (nonatomic) double classic_time_between_uses_std_dur_4;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) double hour;
@property (nonatomic) double hour_plus_0;
@property (nonatomic) double hour_plus_1;
@property (nonatomic) double hour_plus_2;
@property (nonatomic) double hour_plus_3;
@property (nonatomic) double hour_plus_4;
@property (nonatomic) double hour_plus_5;
@property (nonatomic) double hours_until_use;
@property (nonatomic) double is_weekend;
@property (nonatomic) double meaningful_undercharge_rolling_average;

- (double)classic_time_between_uses_med_dur_1;
- (double)classic_time_between_uses_med_dur_2;
- (double)classic_time_between_uses_med_dur_24;
- (double)classic_time_between_uses_med_dur_4;
- (double)classic_time_between_uses_std_dur_1;
- (double)classic_time_between_uses_std_dur_2;
- (double)classic_time_between_uses_std_dur_24;
- (double)classic_time_between_uses_std_dur_4;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (double)hour;
- (double)hour_plus_0;
- (double)hour_plus_1;
- (double)hour_plus_2;
- (double)hour_plus_3;
- (double)hour_plus_4;
- (double)hour_plus_5;
- (double)hours_until_use;
- (id)initWithClassic_time_between_uses_med_dur_1:(double)arg1 classic_time_between_uses_med_dur_2:(double)arg2 classic_time_between_uses_med_dur_4:(double)arg3 classic_time_between_uses_med_dur_24:(double)arg4 classic_time_between_uses_std_dur_1:(double)arg5 classic_time_between_uses_std_dur_2:(double)arg6 classic_time_between_uses_std_dur_4:(double)arg7 classic_time_between_uses_std_dur_24:(double)arg8 hour:(double)arg9 is_weekend:(double)arg10 hour_plus_0:(double)arg11 hour_plus_1:(double)arg12 hour_plus_2:(double)arg13 hour_plus_3:(double)arg14 hour_plus_4:(double)arg15 hour_plus_5:(double)arg16 hours_until_use:(double)arg17 meaningful_undercharge_rolling_average:(double)arg18;
- (double)is_weekend;
- (double)meaningful_undercharge_rolling_average;
- (void)setClassic_time_between_uses_med_dur_1:(double)arg1;
- (void)setClassic_time_between_uses_med_dur_24:(double)arg1;
- (void)setClassic_time_between_uses_med_dur_2:(double)arg1;
- (void)setClassic_time_between_uses_med_dur_4:(double)arg1;
- (void)setClassic_time_between_uses_std_dur_1:(double)arg1;
- (void)setClassic_time_between_uses_std_dur_24:(double)arg1;
- (void)setClassic_time_between_uses_std_dur_2:(double)arg1;
- (void)setClassic_time_between_uses_std_dur_4:(double)arg1;
- (void)setHour:(double)arg1;
- (void)setHour_plus_0:(double)arg1;
- (void)setHour_plus_1:(double)arg1;
- (void)setHour_plus_2:(double)arg1;
- (void)setHour_plus_3:(double)arg1;
- (void)setHour_plus_4:(double)arg1;
- (void)setHour_plus_5:(double)arg1;
- (void)setHours_until_use:(double)arg1;
- (void)setIs_weekend:(double)arg1;
- (void)setMeaningful_undercharge_rolling_average:(double)arg1;

@end
