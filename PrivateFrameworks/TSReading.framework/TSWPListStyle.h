
@interface TSWPListStyle : TSSStyle <TSSPreset>

@property (nonatomic, readonly) NSString *presetKind;

+ (id)CJKListNameForNumberType:(int)arg1;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelIndents;
+ (int)defaultLabelNumberType;
+ (id)defaultLabelString;
+ (id)defaultMissingBulletImage;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;
+ (id)defaultTextIndents;
+ (bool)defaultTieredNumber;
+ (int)effectiveTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (int)firstLabelTypeForPropertyMapping:(id)arg1;
+ (id)harvardStyleWithContext:(id)arg1;
+ (bool)isDefaultMissingBulletImage:(id)arg1;
+ (int)labelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2;
+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;
+ (id)numberedlistStyleForPresets:(id)arg1;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1;
+ (void)pGetDefaultTextIndentFloats:(double)arg1;
+ (id)pLabelTypeArrayForType:(int)arg1;
+ (int)pLabelTypeForLevel:(unsigned long long)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(bool)arg3;
+ (id)presetStyleDescriptor;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)propertyMapForListNumberType:(int)arg1;
+ (id)stickyOverrideProperties;

- (id)baseStyleForTopicNumbers;
- (int)effectiveTypeForLevel:(unsigned long long)arg1;
- (int)firstLabelType;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (double)labelIndentForLevel:(unsigned long long)arg1;
- (int)labelTypeForLevel:(unsigned long long)arg1;
- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)presetKind;
- (double)textIndentForLevel:(unsigned long long)arg1 fontSize:(double)arg2;

@end
