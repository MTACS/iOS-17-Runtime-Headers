
@interface ABPKAlgorithmParams : NSObject {
    ABPK2DDetectionConfiguration * _config2DDetection;
    struct CGSize { 
        double width; 
        double height; 
    }  _regImageResolution;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _regIntrinsics;
}

@property (retain) ABPK2DDetectionConfiguration *config2DDetection;
@property struct CGSize { double x1; double x2; } regImageResolution;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } regIntrinsics;

- (void).cxx_destruct;
- (id)config2DDetection;
- (id)initWithRegIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 regImageResolution:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })regImageResolution;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })regIntrinsics;
- (void)setConfig2DDetection:(id)arg1;
- (void)setRegImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setRegIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)toDict;

@end
