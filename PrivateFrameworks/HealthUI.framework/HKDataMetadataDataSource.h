
@interface HKDataMetadataDataSource : NSObject <HKDataMetadataProvider> {
    HKSample * _sample;
    HKUnitPreferenceController * _unitPreferenceController;
}

- (void).cxx_destruct;
- (id)_formattedValueTextForVO2MaxQuantityObject:(id)arg1 key:(id)arg2 section:(id)arg3;
- (id)_mediaSourceDisplayNamesForSample:(id)arg1;
- (void)addAdditionalDetailValuesToSection:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)addDetailValuesToSection:(id)arg1;
- (id)initWithSample:(id)arg1 unitPreferenceController:(id)arg2;

@end
