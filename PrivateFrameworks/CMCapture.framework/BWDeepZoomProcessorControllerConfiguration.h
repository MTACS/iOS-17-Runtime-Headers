
@interface BWDeepZoomProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    BWVideoFormat * _inputFormat;
    int  _mode;
    BWVideoFormat * _outputFormat;
    int  _type;
    int  _version;
}

@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic) int mode;
@property (nonatomic, retain) BWVideoFormat *outputFormat;
@property (nonatomic) int type;
@property (nonatomic) int version;

+ (int)deepZoomProcessingModeForPixelBuffer:(struct __CVBuffer { }*)arg1 type:(int)arg2 sensorConfiguration:(id)arg3 stillImageSettings:(id)arg4;
+ (int)deepZoomProcessingModeForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 type:(int)arg2 sensorConfiguration:(id)arg3;
+ (bool)doDeepZoomForPixelBuffer:(struct __CVBuffer { }*)arg1 type:(int)arg2 sensorConfiguration:(id)arg3 metadata:(id)arg4 stillImageSettings:(id)arg5 intermediateZoomSrcRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6 intermediateZoomDstRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7;
+ (bool)doDeepZoomForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 type:(int)arg2 sensorConfiguration:(id)arg3 intermediateZoomSrcRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 intermediateZoomDstRectOut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;

- (void)dealloc;
- (id)inputFormat;
- (int)mode;
- (id)outputFormat;
- (void)setInputFormat:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setOutputFormat:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(int)arg1;
- (int)type;
- (int)version;

@end
