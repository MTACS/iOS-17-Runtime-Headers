
@interface SBDistanceFieldView : UIView

@property struct CGColor { }*foregroundColor;
@property bool invertsShape;
@property double lineWidth;
@property double offset;
@property (nonatomic, copy) NSString *renderMode;
@property double sharpness;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGColor { }*)foregroundColor;
- (bool)invertsShape;
- (double)lineWidth;
- (double)offset;
- (id)renderMode;
- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (void)setInvertsShape:(bool)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setRenderMode:(id)arg1;
- (void)setSharpness:(double)arg1;
- (double)sharpness;

@end
