
@interface VNHumanBody3DOutput : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputSize;
    ABPKSkeleton * _liftedSkeleton;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } inputSize;
@property (nonatomic, readonly) ABPKSkeleton *liftedSkeleton;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (id)initWithSkeleton:(id)arg1 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 inputSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })inputSize;
- (id)liftedSkeleton;

@end
