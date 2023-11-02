
@interface HKDataMetadataAudiogramFrequenciesSection : HKDataMetadataSimpleSection

- (void)_addCellsFromAudiogramSample:(id)arg1 forLeftEar:(bool)arg2 unitController:(id)arg3;
- (id)_formattedFrequencyStringFromSensitivityPoint:(id)arg1;
- (id)_formattedSensitivityStringFromSensitivityPoint:(id)arg1 isLeftEar:(bool)arg2 unitController:(id)arg3;
- (id)initWithSample:(id)arg1 leftEar:(bool)arg2 unitController:(id)arg3;

@end
