
@interface PRMonogramColor : NSObject {
    NSBundle * _bundle;
    UIColor * _color;
    NSString * _colorName;
    UIColor * _gradientEndColor;
    UIColor * _gradientStartColor;
    UIColor * _selectedActiveColor;
    UIColor * _selectedActiveTextColor;
    UIColor * _selectedInactiveColor;
}

@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) NSString *colorName;
@property (nonatomic, retain) UIColor *gradientEndColor;
@property (nonatomic, retain) UIColor *gradientStartColor;
@property (nonatomic, retain) UIColor *selectedActiveColor;
@property (nonatomic, retain) UIColor *selectedActiveTextColor;
@property (nonatomic, retain) UIColor *selectedInactiveColor;

+ (id)availableColorNames;
+ (id)availableColors;
+ (id)colorWithName:(id)arg1 inBundle:(id)arg2;
+ (id)defaultBundle;
+ (id)defaultGradientEndColor;
+ (id)defaultGradientStartColor;
+ (id)defaultSelectedActiveColor;
+ (id)defaultSelectedActiveTextColor;
+ (id)defaultSelectedInactiveColor;
+ (id)generateMonogramGradientColorsByNameDictionary;
+ (id)gradientEndName:(id)arg1;
+ (id)gradientStartColor:(id)arg1;
+ (id)gradientStartName:(id)arg1;
+ (id)monogramGradientColorNamed:(id)arg1;

- (void).cxx_destruct;
- (id)bundle;
- (id)color;
- (id)colorName;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (unsigned long long)hash;
- (id)initWithColorName:(id)arg1;
- (id)initWithColorName:(id)arg1 inBundle:(id)arg2;
- (id)initWithRandomColor;
- (bool)isEqual:(id)arg1;
- (id)selectedActiveColor;
- (id)selectedActiveTextColor;
- (id)selectedInactiveColor;
- (void)setBundle:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorName:(id)arg1;
- (void)setGradientEndColor:(id)arg1;
- (void)setGradientStartColor:(id)arg1;
- (void)setSelectedActiveColor:(id)arg1;
- (void)setSelectedActiveTextColor:(id)arg1;
- (void)setSelectedInactiveColor:(id)arg1;

@end
