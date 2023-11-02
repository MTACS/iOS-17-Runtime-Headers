
@protocol TSSPresetSource

@required

+ (void)bootstrapPresetsOfKind:(NSString *)arg1 inTheme:(TSSTheme *)arg2 alternate:(int)arg3;
+ (NSSet *)presetKinds;

@end
