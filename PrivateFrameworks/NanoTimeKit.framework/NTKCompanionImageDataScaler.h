
@interface NTKCompanionImageDataScaler : NSObject {
    double  _compressionQuality;
    NSData * _data;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputCrop;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputSize;
    long long  _orientation;
    NSData * _outputData;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    UTType * _type;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputCrop;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } inputSize;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, readonly) UTType *type;

- (void).cxx_destruct;
- (void)cropAndScaleWithCompletion:(id /* block */)arg1;
- (id)data;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 data:(id)arg3 orientation:(long long)arg4 outputSize:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 data:(id)arg3 orientation:(long long)arg4 type:(id)arg5 outputSize:(struct CGSize { double x1; double x2; })arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputCrop;
- (struct CGSize { double x1; double x2; })inputSize;
- (long long)orientation;
- (struct CGSize { double x1; double x2; })outputSize;
- (id)type;

@end
