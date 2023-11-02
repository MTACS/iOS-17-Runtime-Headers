
@interface _TtC5TeaUIP33_01AB305DE961FE9633E4B4930A1B15A714ImageViewLayer : CALayer {
    void coordinateWithLayer;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic, retain) struct CGColor { }*shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) float shadowOpacity;
@property (nonatomic, retain) const struct CGPath { }*shadowPath;
@property (nonatomic) double shadowRadius;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (unsigned long long)maskedCorners;
- (void)setCornerRadius:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowPath:(const struct CGPath { }*)arg1;
- (void)setShadowRadius:(double)arg1;
- (struct CGColor { }*)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (float)shadowOpacity;
- (const struct CGPath { }*)shadowPath;
- (double)shadowRadius;

@end
