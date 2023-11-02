
@interface UISMutableSlotStyle : UISSlotStyle

@property (nonatomic) unsigned long long accessibilityButtonShapes;
@property (nonatomic) unsigned long long accessibilityContrast;
@property (nonatomic) unsigned long long displayRange;
@property (nonatomic) unsigned char displayScale;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic) unsigned long long legibilityWeight;
@property (nonatomic, copy) NSString *localization;
@property (nonatomic) unsigned long long preferredContentSizeCategory;
@property (nonatomic) struct CGColor { }*tintColor;
@property (nonatomic) unsigned long long userInterfaceIdiom;
@property (nonatomic) unsigned long long userInterfaceStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccessibilityButtonShapes:(unsigned long long)arg1;
- (void)setAccessibilityContrast:(unsigned long long)arg1;
- (void)setDisplayRange:(unsigned long long)arg1;
- (void)setDisplayScale:(unsigned char)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (void)setLegibilityWeight:(unsigned long long)arg1;
- (void)setLocalization:(id)arg1;
- (void)setPreferredContentSizeCategory:(unsigned long long)arg1;
- (void)setTintColor:(struct CGColor { }*)arg1;
- (void)setUserInterfaceIdiom:(unsigned long long)arg1;
- (void)setUserInterfaceStyle:(unsigned long long)arg1;

@end
