
@interface TIFitAffineMLLMatrixWrapper : NSObject {
    void * _pMatrix;
    void * _pRotationMatrix;
    void * _pScaleMatrix;
    void * _pSkewMatrix;
    void * _pTransMatrix;
}

- (void)calcMatrix;
- (void)dealloc;
- (id)init;
- (void)setMatrix:(void*)arg1;
- (void)setRotation:(double)arg1;
- (void)setSkewRotation:(double)arg1;
- (void)setXScale:(double)arg1 yScale:(double)arg2;
- (void)setXTrans:(double)arg1 yTrans:(double)arg2;
- (struct CGPoint { double x1; double x2; })transformedPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
