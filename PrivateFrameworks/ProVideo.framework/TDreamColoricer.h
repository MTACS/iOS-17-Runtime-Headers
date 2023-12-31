
@interface TDreamColoricer : TDreamProgramWrapper {
    struct TDColor3 { 
        float one; 
        float two; 
        float three; 
    }  _firstColor;
    struct TDColor3 { 
        float one; 
        float two; 
        float three; 
    }  _secondColor;
    int  firstColorUniform;
    int  secondColorUniform;
}

@property (nonatomic) struct TDColor3 { float x1; float x2; float x3; } firstColor;
@property (nonatomic) struct TDColor3 { float x1; float x2; float x3; } secondColor;

- (struct TDColor3 { float x1; float x2; float x3; })firstColor;
- (id)init;
- (struct TDColor3 { float x1; float x2; float x3; })secondColor;
- (void)setFirstColor:(struct TDColor3 { float x1; float x2; float x3; })arg1;
- (void)setSecondColor:(struct TDColor3 { float x1; float x2; float x3; })arg1;
- (void)setUniforms;

@end
