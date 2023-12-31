
@interface TDreamDistortionFX : TDreamProgramWrapper {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    float  _fine;
    int  _mode;
    float  adjustUniform;
    int  centerUniform;
    int  modeUniform;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) float fine;
@property (nonatomic) int mode;

- (struct CGPoint { double x1; double x2; })center;
- (float)fine;
- (id)init;
- (int)mode;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFine:(float)arg1;
- (void)setMode:(int)arg1;
- (void)setUniforms;

@end
