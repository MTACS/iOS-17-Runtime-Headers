
@interface NTKVictoryColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long victoryColor;

+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)colorCodeForPigmentEditOption:(id)arg1 forDevice:(id)arg2;
+ (id)colorNameForColorValue:(unsigned long long)arg1;
+ (id)fall2020VictoryColors;
+ (id)gloryEVictoryColors;
+ (id)gloryVictoryColors;
+ (id)graceVictoryColors;
+ (id)optionWithVictoryColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)pigmentFaceDomain;
+ (id)spring2020VictoryColors;

- (id)_valueToFaceBundleStringDict;
- (id)localizedName;
- (bool)optionExistsInDevice:(id)arg1;
- (id)pigmentCollectionName;
- (id)pigmentEditOption;
- (long long)swatchStyle;
- (unsigned long long)victoryColor;

@end
