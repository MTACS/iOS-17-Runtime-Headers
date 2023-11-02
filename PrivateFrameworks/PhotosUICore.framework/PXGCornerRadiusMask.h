
@interface PXGCornerRadiusMask : NSObject {
    <MTLTexture> * _atomicTexture;
    long long  _byteSize;
    <MTLDevice> * _device;
    double  _maxCornerRadius;
    long long  _numberOfSlices;
    double  _screenScale;
    long long  _texturePixelSide;
}

@property (retain) <MTLTexture> *atomicTexture;
@property (nonatomic, readonly) long long byteSize;
@property (nonatomic, readonly) double maxCornerRadius;
@property (nonatomic, readonly) long long numberOfSlices;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) <MTLTexture> *texture;
@property (nonatomic, readonly) long long texturePixelSide;

+ (id)_loadQueue;
+ (id)cornerRadiusMaskForDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3;

- (void).cxx_destruct;
- (void)_loadCornerRadiusTexture;
- (id)atomicTexture;
- (long long)byteSize;
- (id)init;
- (id)initWithDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3;
- (double)maxCornerRadius;
- (long long)numberOfSlices;
- (double)screenScale;
- (void)setAtomicTexture:(id)arg1;
- (id)texture;
- (long long)texturePixelSide;

@end
