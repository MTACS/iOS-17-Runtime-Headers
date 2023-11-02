
@interface HKAudiogramCurrentValueDataProvider : NSObject <HKDataProviderValue> {
    HKAudiogramSample * _audiogram;
    HKHealthStore * _healthStore;
    unsigned long long  _options;
}

@property (nonatomic, retain) HKAudiogramSample *audiogram;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) unsigned long long options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedHearingLevelClassificationWithFont:(id)arg1;
- (id)_attributedHearingLevelStatisticsWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 valueColor:(id)arg4 unitFont:(id)arg5 unitColor:(id)arg6;
- (id)_attributedStringWithString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)_hearingLevelStatsWithDisplayType:(id)arg1 unitController:(id)arg2 shortened:(bool)arg3;
- (bool)_isSupplementaryValueShortened;
- (id)_localizedAverageSensitivity:(id)arg1 ear:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 shortened:(bool)arg5;
- (id)_rangeStringWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;
- (id)audiogram;
- (id)date;
- (id)healthStore;
- (id)initWithAudiogram:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)arg1;
- (unsigned long long)options;
- (void)setAudiogram:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;

@end
