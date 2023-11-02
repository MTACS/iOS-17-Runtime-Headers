
@interface JDUtils : NSObject

+ (id)getMacroAIndices;
+ (id)getMacroBIndices;
+ (int)getPresetFromName:(id)arg1;
+ (int)getPresetFromOperationModeNumber:(unsigned short)arg1;
+ (id)getPresetName:(int)arg1;
+ (const struct PresetName { int x1; id x2; }*)getPresets;

@end
