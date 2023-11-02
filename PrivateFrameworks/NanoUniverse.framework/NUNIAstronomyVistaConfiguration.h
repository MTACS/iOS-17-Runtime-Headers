
@interface NUNIAstronomyVistaConfiguration : NSObject {
    long long  _colorSpace;
    CLKDevice * _device;
    id /* block */  _initialSetupOperation;
    bool  _isGPUEnabled;
    bool  _isRTLLayout;
    float  _maxAPL;
    unsigned long long  _quadViewOptions;
    unsigned long long  _rendererStyle;
    double  _screenScale;
    NSString * _textureSuffix;
}

@property (nonatomic) long long colorSpace;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic, copy) id /* block */ initialSetupOperation;
@property (nonatomic) bool isGPUEnabled;
@property (nonatomic) bool isRTLLayout;
@property (nonatomic) float maxAPL;
@property (nonatomic) unsigned long long quadViewOptions;
@property (nonatomic) unsigned long long rendererStyle;
@property (nonatomic) double screenScale;
@property (nonatomic, copy) NSString *textureSuffix;

// Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse

- (void).cxx_destruct;
- (long long)colorSpace;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id /* block */)initialSetupOperation;
- (bool)isGPUEnabled;
- (bool)isRTLLayout;
- (float)maxAPL;
- (unsigned long long)quadViewOptions;
- (unsigned long long)rendererStyle;
- (double)screenScale;
- (void)setColorSpace:(long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setInitialSetupOperation:(id /* block */)arg1;
- (void)setIsGPUEnabled:(bool)arg1;
- (void)setIsRTLLayout:(bool)arg1;
- (void)setMaxAPL:(float)arg1;
- (void)setQuadViewOptions:(unsigned long long)arg1;
- (void)setRendererStyle:(unsigned long long)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setTextureSuffix:(id)arg1;
- (id)textureSuffix;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)defaultConfigurationWithDevice:(id)arg1;

@end
