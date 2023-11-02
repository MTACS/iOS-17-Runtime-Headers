
@interface _HKGraphViewYAxisTransform : NSObject {
    HKValueRange * _endingRange;
    struct HKLinearTransform { 
        double offset; 
        double scale; 
    }  _endingTransform;
    NSArray * _seriesForTransform;
    struct HKLinearTransform { 
        double offset; 
        double scale; 
    }  _startingTransform;
    HKAxis * _yAxisForTransform;
}

@property (nonatomic, readonly) HKValueRange *endingRange;
@property (nonatomic, readonly) struct HKLinearTransform { double x1; double x2; } endingTransform;
@property (nonatomic, readonly) NSArray *seriesForTransform;
@property (nonatomic, readonly) struct HKLinearTransform { double x1; double x2; } startingTransform;
@property (nonatomic, readonly) HKAxis *yAxisForTransform;

- (void).cxx_destruct;
- (id)endingRange;
- (struct HKLinearTransform { double x1; double x2; })endingTransform;
- (id)initWithYAxis:(id)arg1 seriesForTransform:(id)arg2 startingTransform:(struct HKLinearTransform { double x1; double x2; })arg3 endingTransform:(struct HKLinearTransform { double x1; double x2; })arg4 endingRange:(id)arg5;
- (id)seriesForTransform;
- (struct HKLinearTransform { double x1; double x2; })startingTransform;
- (id)yAxisForTransform;

@end
