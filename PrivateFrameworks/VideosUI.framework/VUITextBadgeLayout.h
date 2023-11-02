
@interface VUITextBadgeLayout : NSObject {
    UIColor * _backgroundColor;
    unsigned long long  _badgeKind;
    int  _blendMode;
    NSArray * _gradientBgColors;
    bool  _isUppercased;
    double  _layerCornerRadius;
    double  _minHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    VUITextLayout * _textLayout;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) unsigned long long badgeKind;
@property (nonatomic) int blendMode;
@property (nonatomic, retain) NSArray *gradientBgColors;
@property (nonatomic) bool isUppercased;
@property (nonatomic) double layerCornerRadius;
@property (nonatomic) double minHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) VUITextLayout *textLayout;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (unsigned long long)badgeKind;
- (int)blendMode;
- (id)gradientBgColors;
- (bool)isUppercased;
- (double)layerCornerRadius;
- (double)minHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadgeKind:(unsigned long long)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setGradientBgColors:(id)arg1;
- (void)setIsUppercased:(bool)arg1;
- (void)setLayerCornerRadius:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextLayout:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)textLayout;
- (id)tintColor;

@end
