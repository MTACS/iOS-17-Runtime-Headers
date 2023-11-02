
@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData> {
    unsigned long long  _annotationOptions;
    HKValueRange * _annotationOverrideDateRange;
    NSNumber * _annotationOverrideDuration;
    NSNumber * _annotationOverridePrefixColorsActive;
    unsigned long long  _currentValueViewOptions;
    long long  _currentValueViewOptionsPriority;
    NSNumber * _currentValueViewOverridePrefixColorsActive;
    long long  _seriesType;
    HKSleepDaySummary * _sleepDaySummary;
}

@property (nonatomic) unsigned long long annotationOptions;
@property (nonatomic, retain) HKValueRange *annotationOverrideDateRange;
@property (nonatomic, retain) NSNumber *annotationOverrideDuration;
@property (nonatomic, retain) NSNumber *annotationOverridePrefixColorsActive;
@property (nonatomic) unsigned long long currentValueViewOptions;
@property (nonatomic) long long currentValueViewOptionsPriority;
@property (nonatomic, retain) NSNumber *currentValueViewOverridePrefixColorsActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long seriesType;
@property (nonatomic, readonly) HKSleepDaySummary *sleepDaySummary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)annotationOptions;
- (id)annotationOverrideDateRange;
- (id)annotationOverrideDuration;
- (id)annotationOverridePrefixColorsActive;
- (id)copyWithAnnotationOptions:(unsigned long long)arg1;
- (unsigned long long)currentValueViewOptions;
- (long long)currentValueViewOptionsPriority;
- (id)currentValueViewOverridePrefixColorsActive;
- (id)initWithSeriesType:(long long)arg1 sleepDaySummary:(id)arg2;
- (long long)seriesType;
- (void)setAnnotationOptions:(unsigned long long)arg1;
- (void)setAnnotationOverrideDateRange:(id)arg1;
- (void)setAnnotationOverrideDuration:(id)arg1;
- (void)setAnnotationOverridePrefixColorsActive:(id)arg1;
- (void)setCurrentValueViewOptions:(unsigned long long)arg1;
- (void)setCurrentValueViewOptionsPriority:(long long)arg1;
- (void)setCurrentValueViewOverridePrefixColorsActive:(id)arg1;
- (id)sleepDaySummary;

@end
