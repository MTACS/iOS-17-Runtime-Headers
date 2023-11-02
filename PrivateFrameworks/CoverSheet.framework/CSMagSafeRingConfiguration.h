
@interface CSMagSafeRingConfiguration : NSObject {
    double  _lineWidth;
    struct CGPoint { 
        double x; 
        double y; 
    }  _ringCenter;
    double  _ringDiameter;
    double  _splashRingDiameter;
}

@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGPoint { double x1; double x2; } ringCenter;
@property (nonatomic) double ringDiameter;
@property (nonatomic) double splashRingDiameter;

+ (id)auxiliaryConfiguration;
+ (id)defaultConfiguration;
+ (id)staticConfiguration;
+ (double)staticScaleFactor;

- (id)initWithRingDiameter:(struct SBFScreenSpecificCGFloatValue { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; })arg1 lineWidth:(struct SBFScreenSpecificCGFloatValue { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; })arg2 splashRingDiamter:(struct SBFScreenSpecificCGFloatValue { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; })arg3;
- (double)lineWidth;
- (struct CGPoint { double x1; double x2; })ringCenter;
- (double)ringDiameter;
- (void)setLineWidth:(double)arg1;
- (void)setRingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRingDiameter:(double)arg1;
- (void)setSplashRingDiameter:(double)arg1;
- (double)splashRingDiameter;

@end
