
@interface HFLightbulbControlItem : HFIncrementalStateControlItem

+ (id)optionsForPrimaryStateControlItem:(id)arg1 incrementalCharacteristicType:(id)arg2;
+ (id)readOnlyCharacteristicTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_tintColorForNaturalLightFromResults:(id)arg1;
- (id)_tintColorFromResults:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (bool)supportsRGBColor;
- (id)writeValue:(id)arg1;

@end
