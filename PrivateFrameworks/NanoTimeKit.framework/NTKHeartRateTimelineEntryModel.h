
@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel {
    long long  _BPM;
    NSArray * _chartPoints;
    long long  _dailyHighBPM;
    long long  _dailyLowBPM;
    bool  _hasBPM;
    bool  _hasSummary;
    bool  _lessThanMinute;
    bool  _locked;
    NSDate * _measurementDate;
}

@property (nonatomic) long long BPM;
@property (nonatomic, retain) NSArray *chartPoints;
@property (nonatomic) long long dailyHighBPM;
@property (nonatomic) long long dailyLowBPM;
@property (nonatomic) bool hasBPM;
@property (nonatomic) bool hasSummary;
@property (nonatomic) bool lessThanMinute;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, retain) NSDate *measurementDate;

- (void).cxx_destruct;
- (long long)BPM;
- (id)_bpmString;
- (id)_heartrateString;
- (id)_metadataWithCurrentMeasurements;
- (id)_newCircularTemplateUsingMediumSize:(bool)arg1;
- (id)_newExtraLargeTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_signatureBezelTextProvider;
- (id)chartPoints;
- (long long)dailyHighBPM;
- (long long)dailyLowBPM;
- (bool)hasBPM;
- (bool)hasSummary;
- (bool)isLocked;
- (bool)lessThanMinute;
- (id)measurementDate;
- (void)setBPM:(long long)arg1;
- (void)setChartPoints:(id)arg1;
- (void)setDailyHighBPM:(long long)arg1;
- (void)setDailyLowBPM:(long long)arg1;
- (void)setHasBPM:(bool)arg1;
- (void)setHasSummary:(bool)arg1;
- (void)setLessThanMinute:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMeasurementDate:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end
