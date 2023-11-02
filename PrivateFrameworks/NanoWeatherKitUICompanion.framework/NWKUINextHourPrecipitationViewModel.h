
@interface NWKUINextHourPrecipitationViewModel : NSObject {
    NSString * _conditionText;
    NSString * _conditionTitleText;
    NSDate * _currentTime;
    bool  _isRTL;
    WFNextHourPrecipitation * _nextHourPrecipitation;
}

@property (nonatomic, readonly) NSString *conditionText;
@property (nonatomic, readonly) NSString *conditionTitleText;
@property (nonatomic, readonly) NSDate *currentTime;
@property (nonatomic) bool isRTL;
@property (nonatomic, readonly) NSArray *minuteStrings;
@property (nonatomic, readonly) WFNextHourPrecipitation *nextHourPrecipitation;

- (void).cxx_destruct;
- (id)_arrayOfZerosOfSize:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_conditionRangeForDescription:(id)arg1;
- (id)_percentPrecipitationIntensitiesForMinutesOut:(unsigned long long)arg1 resolution:(unsigned long long)arg2;
- (id)attributedConditionsTextWithFont:(id)arg1;
- (id)conditionText;
- (id)conditionTitleText;
- (id)currentTime;
- (id)initWithNextHourPrecipitation:(id)arg1 currentTime:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isRTL;
- (id)minuteStrings;
- (id)nextHourPrecipitation;
- (id)percentPrecipitationIntensities;
- (void)setIsRTL:(bool)arg1;

@end
