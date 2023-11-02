
@interface PXViewSpec : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    long long  _compositingFilterType;
    NSString * _cornerCurve;
    unsigned long long  _cornerMask;
    double  _cornerRadius;
    double  _displayScale;
    bool  _hidden;
    double  _rotationAngle;
    UIColor * _selectionHighlightColor;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long compositingFilterType;
@property (nonatomic, copy) NSString *cornerCurve;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double displayScale;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) double rotationAngle;
@property (nonatomic, copy) UIColor *selectionHighlightColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (long long)compositingFilterType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerCurve;
- (unsigned long long)cornerMask;
- (double)cornerRadius;
- (double)displayScale;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (double)rotationAngle;
- (id)selectionHighlightColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCompositingFilterType:(long long)arg1;
- (void)setCornerCurve:(id)arg1;
- (void)setCornerMask:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setSelectionHighlightColor:(id)arg1;

@end
