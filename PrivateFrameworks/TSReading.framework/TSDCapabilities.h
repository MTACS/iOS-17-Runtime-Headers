
@interface TSDCapabilities : NSObject {
    long long  _device;
    long long  _deviceType;
    long long  _platform;
    long long  _renderer;
}

@property (nonatomic, readonly) long long device;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) bool hasLightningPort;
@property (nonatomic, readonly) bool isMetalCapable;
@property (nonatomic, readonly) bool isRendererH3OrBelow;
@property (nonatomic, readonly) bool isRendererH4OrBelow;
@property (nonatomic, readonly) bool isRendererH5OrBelow;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumHardcodedTextureSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumTextureSize;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) long long renderer;

+ (id)currentCapabilities;
+ (id)currentCapabilitiesOverride;
+ (void)setCurrentCapabilitiesOverride:(id)arg1;

- (long long)device;
- (long long)deviceType;
- (bool)hasLightningPort;
- (id)init;
- (bool)isMetalCapable;
- (bool)isRendererH3OrBelow;
- (bool)isRendererH4OrBelow;
- (bool)isRendererH5OrBelow;
- (struct CGSize { double x1; double x2; })maximumHardcodedTextureSize;
- (struct CGSize { double x1; double x2; })maximumMetalTextureSizeForDevice:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumTextureSize;
- (bool)p_isMetalCapable;
- (void)p_setupDevice;
- (void)p_setupPlatform;
- (long long)platform;
- (long long)renderer;

@end
