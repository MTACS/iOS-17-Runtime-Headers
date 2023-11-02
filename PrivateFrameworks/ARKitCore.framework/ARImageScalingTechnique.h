
@interface ARImageScalingTechnique : ARTechnique {
    unsigned int  _conversionPixelFormatType;
    unsigned char  _downscaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _scalingInputSize;
    NSMutableArray * _scalingPasses;
    bool  _shouldUseScaleFactor;
}

@property (nonatomic) unsigned int conversionPixelFormatType;
@property (nonatomic, readonly) unsigned char downscaleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scaledSize;

+ (id)scalingPassDescriptionForInputSize:(struct CGSize { double x1; double x2; })arg1 scaledSize:(struct CGSize { double x1; double x2; })arg2 conversionPixelFormat:(unsigned int)arg3;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_applyScalingPasses:(struct __CVBuffer { }*)arg1;
- (void)_createScalingPassesForInputSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)conversionPixelFormatType;
- (unsigned char)downscaleFactor;
- (id)initWithDownscaleFactor:(unsigned char)arg1;
- (id)initWithScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (struct CGSize { double x1; double x2; })scaledSize;
- (void)setConversionPixelFormatType:(unsigned int)arg1;

@end
