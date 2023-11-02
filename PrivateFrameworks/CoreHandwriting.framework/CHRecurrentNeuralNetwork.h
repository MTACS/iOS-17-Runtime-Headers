
@interface CHRecurrentNeuralNetwork : NSObject {
    NSString * _modelName;
}

@property (nonatomic, readonly) NSString *modelName;

+ (id)normalizedDrawing:(id)arg1 scaleFactor:(double)arg2 interpolationDistance:(double)arg3 outputPointMap:(void*)arg4;

- (void).cxx_destruct;
- (id)initWithModelName:(id)arg1;
- (id)modelName;
- (id)normalizedDrawing:(id)arg1 targetHeight:(double)arg2 minimumDrawingSize:(struct CGSize { double x1; double x2; })arg3 interpolationDistance:(double)arg4 outScaleFactor:(double*)arg5 outputPointMap:(void*)arg6;

@end
