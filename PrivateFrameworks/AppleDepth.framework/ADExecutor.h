
@interface ADExecutor : NSObject {
    unsigned long long  _engineType;
    ADEspressoRunner * _espressoRunner;
    unsigned int  _inputOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputRoi;
    unsigned long long  _layout;
    long long  _rotationConstant;
    unsigned long long  _rotationPreference;
}

@property (nonatomic, readonly, copy) NSString *networkVersionString;

- (void).cxx_destruct;
- (long long)convertIntrinsicsFrom:(struct __CVBuffer { }*)arg1 cropBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 to:(struct __CVBuffer { }*)arg3;
- (id)getIntermediateWithName:(id)arg1;
- (id)getIntermediates;
- (id)init;
- (id)networkVersionString;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 descriptorForROI:(id)arg3 exifOrientation:(unsigned int)arg4 rotationPreference:(unsigned long long)arg5 inferenceDescriptor:(id)arg6;
- (long long)solveRotationPreference:(unsigned long long)arg1;

@end
