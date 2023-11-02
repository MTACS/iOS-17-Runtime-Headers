
@interface ARCoachingMetalSplineData : NSObject {
    <MTLBuffer> * _controlPointIndicesBuffer;
    <MTLBuffer> * _controlPointsBuffer;
    <MTLBuffer> * _instanceBuffer;
    NSArray * _instanceTransforms;
    int  _patchCount;
    <MTLBuffer> * _patchUserDataBuffer;
    ARCoachingControlPointContainer * _recordedControlPoints;
    void _recordedScale;
    void _recordedTranslation;
    ARCoachingBlendableSplineGroup * _shapes;
    <MTLBuffer> * _tessellationFactorsBuffer;
}

@property (nonatomic, readonly) <MTLBuffer> *controlPointIndicesBuffer;
@property (nonatomic, readonly) <MTLBuffer> *controlPointsBuffer;
@property (nonatomic, readonly) <MTLBuffer> *instanceBuffer;
@property (nonatomic, readonly) NSArray *instanceTransforms;
@property (nonatomic, readonly) int patchCount;
@property (nonatomic, readonly) <MTLBuffer> *patchUserDataBuffer;
@property (nonatomic, readonly) ARCoachingControlPointContainer *recordedControlPoints;
@property (nonatomic, readonly) void recordedScale;
@property (nonatomic, readonly) void recordedTranslation;
@property (nonatomic, readonly) ARCoachingBlendableSplineGroup *shapes;
@property (nonatomic, readonly) <MTLBuffer> *tessellationFactorsBuffer;

- (void).cxx_destruct;
- (void)computeInstanceTransformScale;
- (void)computeInstanceTransformScale:(void *)arg1 s1:(void *)arg2 t:(void *)arg3; // needs 3 arg types, found 1: float
- (void)computeInstanceTransformScale:(void *)arg1 t:(void *)arg2; // needs 2 arg types, found 1: float
- (void)computeInstanceTransformTranslate:(void *)arg1 index:(void *)arg2; // needs 2 arg types, found 1: int
- (void)computeInstanceTransformTranslate:(void *)arg1 t:(void *)arg2 index:(void *)arg3; // needs 3 arg types, found 2: float, int
- (void)computeInstanceTransformTranslate:(void *)arg1 x1:(void *)arg2 t:(void *)arg3 index:(void *)arg4; // needs 4 arg types, found 2: float, int
- (void)computeShapeBlendWithEnd:(struct { float x1; }*)arg1 endCount:(int)arg2;
- (void)computeShapeBlendWithEnd:(struct { float x1; }*)arg1 endCount:(int)arg2 t:(float)arg3;
- (void)computeShapeBlendWithStart:(struct { float x1; }*)arg1 startCount:(int)arg2 end:(struct { float x1; }*)arg3 endCount:(int)arg4 t:(float)arg5;
- (id)controlPointIndicesBuffer;
- (id)controlPointsBuffer;
- (id)init:(id)arg1;
- (id)instanceBuffer;
- (id)instanceTransforms;
- (void)makeShapes;
- (int)patchCount;
- (id)patchUserDataBuffer;
- (void)recordState;
- (id)recordedControlPoints;
- (void)recordedScale;
- (void)recordedTranslation;
- (void)resetInstanceTransforms:(id)arg1;
- (id)shapeBlendWithStart:(struct { float x1; }*)arg1 startCount:(int)arg2 end:(struct { float x1; }*)arg3 endCount:(int)arg4 t:(float)arg5;
- (id)shapes;
- (id)tessellationFactorsBuffer;

@end
