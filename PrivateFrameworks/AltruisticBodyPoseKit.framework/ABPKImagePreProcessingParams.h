
@interface ABPKImagePreProcessingParams : NSObject {
    ABPKCropParams * _cropParams;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputResolution;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputResolution;
    ABPKPaddingParams * _paddingParams;
    ABPKDirectScalingParams * _scalingParams;
    int  _type;
}

@property (nonatomic, readonly) ABPKCropParams *cropParams;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } inputResolution;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputResolution;
@property (nonatomic, readonly) ABPKPaddingParams *paddingParams;
@property (nonatomic, readonly) ABPKDirectScalingParams *scalingParams;
@property (nonatomic, readonly) int type;

+ (void)convert2DPoint:(void *)arg1 toInputSpaceWithParams:(void *)arg2; // needs 2 arg types, found 1: id

- (void).cxx_destruct;
- (id)cropParams;
- (id)initWithType:(int)arg1 inputResolution:(struct CGSize { double x1; double x2; })arg2 outputResolution:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })inputResolution;
- (struct CGSize { double x1; double x2; })outputResolution;
- (id)paddingParams;
- (void)printData;
- (id)scalingParams;
- (int)type;

@end
