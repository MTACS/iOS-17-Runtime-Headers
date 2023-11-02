
@interface PTRenderPipelineDescriptor : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _colorInputSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _colorOutputSize;
    long long  _debugRendering;
    <MTLDevice> * _device;
    struct CGSize { 
        double width; 
        double height; 
    }  _disparitySize;
    bool  _gpuProfiling;
    NSDictionary * _options;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
    bool  _useRGBA;
    bool  _verbose;
    unsigned long long  _version;
}

@property (readonly) struct CGSize { double x1; double x2; } colorInputSize;
@property (readonly) struct CGSize { double x1; double x2; } colorOutputSize;
@property long long debugRendering;
@property (readonly, retain) <MTLDevice> *device;
@property (readonly) struct CGSize { double x1; double x2; } disparitySize;
@property bool gpuProfiling;
@property (nonatomic, retain) NSDictionary *options;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property bool useRGBA;
@property bool verbose;
@property (readonly) unsigned long long version;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })colorInputSize;
- (struct CGSize { double x1; double x2; })colorOutputSize;
- (id)copy;
- (long long)debugRendering;
- (id)device;
- (struct CGSize { double x1; double x2; })disparitySize;
- (bool)gpuProfiling;
- (id)initWithDevice:(id)arg1 version:(unsigned long long)arg2 colorInputSize:(struct CGSize { double x1; double x2; })arg3 colorOutputSize:(struct CGSize { double x1; double x2; })arg4 disparitySize:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithDevice:(id)arg1 version:(unsigned long long)arg2 colorSize:(struct CGSize { double x1; double x2; })arg3 disparitySize:(struct CGSize { double x1; double x2; })arg4;
- (id)options;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)setDebugRendering:(long long)arg1;
- (void)setGpuProfiling:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setUseRGBA:(bool)arg1;
- (void)setVerbose:(bool)arg1;
- (bool)useRGBA;
- (bool)verbose;
- (unsigned long long)version;

@end
