
@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel {
    WorldClockCity * _city;
    bool  _showIdealizedTime;
}

@property (nonatomic, retain) WorldClockCity *city;
@property (nonatomic) bool showIdealizedTime;

+ (id)_analogImageProvider;

- (void).cxx_destruct;
- (id)_abbreviationTextProvider;
- (id)_cityNameTextProvider;
- (id)_dayOffsetTextProvider;
- (id)_differenceTextProvider;
- (id)_differenceTextProviderWithSize:(long long)arg1 andCaps:(bool)arg2;
- (id)_getSolarColorsForLocation:(id)arg1 atDate:(id)arg2;
- (id)_graphicCircularMetadata;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newLargeModularTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newSmallModularTemplate;
- (id)_signatureCorner;
- (id)_solarGradientColors;
- (id)_timeAndAbbreviationTextProvider;
- (id)_timeAndCityNameOffsetTextProvider;
- (id)_timeAndDayOffsetTextProvider;
- (id)_timeAndDifferenceOffsetTextProvider;
- (id)_timeCityNameTimeZoneOffsetTextProvider;
- (id)_timeTextProvider;
- (id)_timeZone;
- (double)_timeZoneOffset;
- (id)city;
- (id)init;
- (void)setCity:(id)arg1;
- (void)setShowIdealizedTime:(bool)arg1;
- (bool)showIdealizedTime;
- (id)templateForComplicationFamily:(long long)arg1;

@end
