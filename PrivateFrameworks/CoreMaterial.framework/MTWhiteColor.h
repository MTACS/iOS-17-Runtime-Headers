
@interface MTWhiteColor : MTColor {
    double  _alpha;
    double  _white;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double white;

- (struct CGColor { }*)CGColor;
- (id)_initWithCGColor:(struct CGColor { }*)arg1;
- (id)_initWithDescription:(id)arg1;
- (id)_rgbColor;
- (double)alpha;
- (id)colorBlendedWithColor:(id)arg1;
- (id)colorDescription;
- (id)colorWithAdditionalAlphaComponent:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)description;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })sourceOverColorMatrix;
- (double)white;

@end
