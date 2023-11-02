
@interface JFXMatting : NSObject {
    long long  _cameraLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  _colorBufferSize;
    bool  _ready;
}

@property (nonatomic) bool ready;

+ (bool)_defaultMatteGeneratorPrefersDepth;
+ (bool)canMatteWithANE;
+ (id)defaultMatteGenerator:(id)arg1;
+ (Class)defaultMatteGeneratorClass;
+ (bool)defaultMatteGeneratorPrefersDepth;
+ (id)depthDataForCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (bool)isCVASegMattingSPIWorking;
+ (struct CGSize { double x1; double x2; })mattingDepthInputSize;
+ (void)postNotification:(unsigned long long)arg1;

- (void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initForFrameSet:(id)arg1;
- (bool)isValidForCameraFrameSet:(id)arg1;
- (bool)ready;
- (void)requestMattingStatus;
- (void)setReady:(bool)arg1;

@end
