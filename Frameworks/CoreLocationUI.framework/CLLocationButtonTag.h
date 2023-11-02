
@interface CLLocationButtonTag : UISSlotTag <NSSecureCoding> {
    UIColor * _backgroundColor;
    double  _cornerRadius;
    double  _fontSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    long long  _icon;
    long long  _label;
    bool  _renderedSuccessfully;
    UISSlotStyle * _style;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) double buttonHeight;
@property (nonatomic, readonly) double buttonWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double fontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) long long icon;
@property (nonatomic) long long label;
@property (nonatomic) bool renderedSuccessfully;
@property (nonatomic, retain) UISSlotStyle *style;
@property (nonatomic, retain) UIColor *tintColor;

+ (unsigned long long)cacheLimit;
+ (unsigned int)secureNameForLabel:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (id)backgroundColor;
- (double)buttonHeight;
- (double)buttonWidth;
- (bool)contrastValidForBgColorAndFgTextWithCumulativeOpacity:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)failGradeForStyle:(id)arg1;
- (double)fontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hitTestInformationMaskForStyle:(id)arg1;
- (long long)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(long long)arg1 iconType:(long long)arg2 backgroundColor:(id)arg3 tintColor:(id)arg4 cornerRadius:(double)arg5 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 fontSize:(double)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (long long)label;
- (bool)renderedSuccessfully;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureNameForStyle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIcon:(long long)arg1;
- (void)setLabel:(long long)arg1;
- (void)setRenderedSuccessfully:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)style;
- (id)tintColor;

@end
