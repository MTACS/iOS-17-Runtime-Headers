
@interface PNPPlatterShadowView : UIView

@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic, retain) UIBezierPath *shadowPath;
@property (nonatomic) double shadowRadius;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowPath:(id)arg1;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (id)shadowPath;
- (double)shadowRadius;

@end
