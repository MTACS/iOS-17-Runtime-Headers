
@interface UIPreviewParameters : NSObject <NSCopying> {
    bool  _appliesShadow;
    UIColor * _backgroundColor;
    bool  _hidesSourceViewDuringDropAnimation;
    bool  _isUsingCustomBackgroundColor;
    long long  _previewMode;
    UIBezierPath * _shadowPath;
    NSArray * _textLineRects;
    double  _textPathCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textPathInsets;
    UIBezierPath * _visiblePath;
}

@property (getter=_textPathCornerRadius, setter=_setTextPathCornerRadius:, nonatomic) double _textPathCornerRadius;
@property (getter=_textPathInsets, setter=_setTextPathInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _textPathInsets;
@property (nonatomic) bool appliesShadow;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) UIBezierPath *effectiveShadowPath;
@property (nonatomic) bool hidesSourceViewDuringDropAnimation;
@property (nonatomic, readonly) bool isUsingCustomBackgroundColor;
@property (getter=_previewMode, setter=_setPreviewMode:, nonatomic) long long previewMode;
@property (nonatomic, copy) UIBezierPath *shadowPath;
@property (getter=_isSingleLineText, nonatomic, readonly) bool singleLineText;
@property (nonatomic, copy) UIBezierPath *visiblePath;

- (void).cxx_destruct;
- (id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;
- (bool)_isSingleLineText;
- (long long)_previewMode;
- (void)_setPreviewMode:(long long)arg1;
- (void)_setTextPathCornerRadius:(double)arg1;
- (void)_setTextPathInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)_textPathCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textPathInsets;
- (bool)appliesShadow;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveShadowPath;
- (unsigned long long)hash;
- (bool)hidesSourceViewDuringDropAnimation;
- (id)init;
- (id)initWithTextLineRects:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUsingCustomBackgroundColor;
- (void)setAppliesShadow:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setHidesSourceViewDuringDropAnimation:(bool)arg1;
- (void)setShadowPath:(id)arg1;
- (void)setVisiblePath:(id)arg1;
- (id)shadowPath;
- (id)visiblePath;

@end
