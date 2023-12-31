
@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (nonatomic, readonly) NSString *presetKind;

+ (id)emphasisProperties;
+ (id)nonEmphasisCharacterProperties;
+ (id)nullStyleName;
+ (id)nullStyleWithContext:(id)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;

- (id)presetKind;
- (bool)transformsFontSizes;
- (int)writingDirection;

@end
