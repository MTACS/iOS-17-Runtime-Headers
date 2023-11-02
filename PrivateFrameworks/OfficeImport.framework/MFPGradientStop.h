
@interface MFPGradientStop : NSObject {
    OITSUColor * mColor;
    float  mPosition;
}

- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)arg1 position:(float)arg2;
- (float)position;

@end
