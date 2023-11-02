
@interface PAEKeyerCbCrSetup : NSObject <NSSecureCoding> {
    bool  _initialized;
    void * _keyer2DSatSpline;
    void * _keyer2DSoftPie;
    void * _keyer2DTolPie;
    NSNumber * _softPieX;
    NSNumber * _softPieY;
    NSMutableArray * _splineVertex;
    NSNumber * _tolPieX;
    NSNumber * _tolPieY;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void*)getKeyer2DSatSpline;
- (void*)getKeyer2DSoftPie;
- (void*)getKeyer2DTolPie;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)interpPieWithWeight:(float)arg1 currentDirectionCorrection:(float)arg2 nextDirectionCorrection:(float)arg3 interpolatedCenter:(struct Vec2f { float x1[2]; })arg4 currentCenter:(struct Vec2f { float x1[2]; })arg5 currentPolar:(const struct Vec2f { float x1[2]; }*)arg6 nextCenter:(struct Vec2f { float x1[2]; })arg7 nextPolar:(const struct Vec2f { float x1[2]; }*)arg8 interpolationType:(int)arg9 interpolatedPie:(void*)arg10;
- (void)interpVec2f:(float)arg1 left:(struct Vec2f { float x1[2]; })arg2 right:(struct Vec2f { float x1[2]; })arg3 interpolated:(struct Vec2f { float x1[2]; }*)arg4;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (bool)isEqualTo:(id)arg1;
- (void)offsetPie:(struct Vec2f { float x1[2]; }*)arg1 offsetDegrees:(float)arg2;
- (void)pieToPolarForPie:(void*)arg1 polar:(struct Vec2f { float x1[2]; }*)arg2;
- (void)pieToPolarForPie:(void*)arg1 softPie:(void*)arg2 tolPolar:(struct Vec2f { float x1[2]; }*)arg3 softPolar:(struct Vec2f { float x1[2]; }*)arg4;
- (struct Vec2f { float x1[2]; })polarToCartesian:(struct Vec2f { float x1[2]; })arg1;
- (void)setSoftPieX:(id)arg1 indice:(int)arg2;
- (void)setSoftPieY:(id)arg1 indice:(int)arg2;
- (void)setTolPieX:(id)arg1 indice:(int)arg2;
- (void)setTolPieY:(id)arg1 indice:(int)arg2;
- (void)toPolar:(const struct Vec2f { float x1[2]; }*)arg1 polar:(struct Vec2f { float x1[2]; }*)arg2;

@end
