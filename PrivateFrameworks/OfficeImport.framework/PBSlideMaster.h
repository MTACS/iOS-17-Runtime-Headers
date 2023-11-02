
@interface PBSlideMaster : PBSlideBase

+ (id)createMasterStyleMap:(id)arg1 state:(id)arg2;
+ (void)flattenBaseMasterStyleType:(int)arg1 masterStyleMap:(id)arg2;
+ (void)flattenMasterStyleType:(int)arg1 baseType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2;
+ (void)padMissingLevels:(id)arg1;
+ (void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readSlideMasterColorScheme:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readSlideMasterName:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readSlideMasterTextStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)setCannedOtherTextListStyle:(id)arg1;
+ (void)setFont:(id)arg1 fromCharacterProperties:(id)arg2;
+ (void)setSlideMasterTextStyles:(id)arg1 state:(id)arg2;
+ (id)textBodyForPlaceholderType:(int)arg1 slideLayout:(id)arg2;
+ (int)textTypeFor:(int)arg1 placeholderType:(int)arg2;

@end
