
@interface _PIParallaxRenderResource : NSObject {
    <NUPurgeableStorage> * _destination;
    NSString * _identifier;
    CIImage * _image;
    NUImageHistogram * _imageHistogram;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _luminanceThresholds;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _luminanceWeights;
    CIRenderTask * _task;
}

@property (nonatomic, retain) <NUPurgeableStorage> *destination;
@property (nonatomic, readonly) PFParallaxColor *dominantColor;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) CIImage *image;
@property (nonatomic, retain) NUImageHistogram *imageHistogram;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } luminanceThresholds;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } luminanceWeights;
@property (nonatomic, readonly) PFParallaxColor *medianColor;
@property (nonatomic, retain) CIRenderTask *task;

- (void).cxx_destruct;
- (id)destination;
- (id)dominantColor;
- (id)identifier;
- (id)image;
- (id)imageHistogram;
- (struct { float x1; float x2; float x3; float x4; })luminanceThresholds;
- (struct { float x1; float x2; float x3; float x4; })luminanceWeights;
- (id)medianColor;
- (void)setDestination:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageHistogram:(id)arg1;
- (void)setLuminanceThresholds:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setLuminanceWeights:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
