
@interface NTKSampleComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTemplate * _complicationTemplate;
}

+ (bool)_isComplicationFamilyAvaialbleBeforeGlory:(long long)arg1;
+ (bool)_shouldUseFallbackImagesForDevice:(id)arg1;
+ (bool)acceptsClassicComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (id)_alarmTemplate;
- (id)_astronomyTemplateFromVista:(unsigned long long)arg1;
- (id)_batteryTemplate;
- (id)_breathingTemplate;
- (id)_city;
- (id)_currentEntryModel;
- (id)_fullColorImageProviderWithSystemImageName:(id)arg1 tintColor:(id)arg2 fallbackImageName:(id)arg3;
- (id)_heartrateTemplate;
- (id)_imageProviderWithSystemImageName:(id)arg1 overridePointSize:(id)arg2 tintColor:(id)arg3 fallbackImageName:(id)arg4;
- (void)_localeDidChange:(id)arg1;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_newsTemplate;
- (id)_nowPlayingTemplate;
- (id)_podcastsTemplate;
- (id)_radioTemplate;
- (id)_reminderTemplate;
- (id)_siriTemplate;
- (id)_solarTemplate;
- (id)_stopwatchTemplate;
- (id)_worldClockTemplate;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (id)sampleTemplate;
- (bool)supportsFlowerImages;

@end
