
@interface PIPortraitVideoRenderer : NSObject {
    struct { 
        long long width; 
        long long height; 
    }  _colorSize;
    long long  _debugMode;
    <MTLDevice> * _device;
    struct { 
        long long width; 
        long long height; 
    }  _disparitySize;
    bool  _inUse;
    NSDate * _lastUseTime;
    int  _quality;
    PTRenderPipeline * _renderPipeline;
    <PTRenderState> * _renderState;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } colorSize;
@property (nonatomic, readonly) long long debugMode;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) struct { long long x1; long long x2; } disparitySize;
@property (getter=isInUse, nonatomic) bool inUse;
@property (nonatomic, retain) NSDate *lastUseTime;
@property (nonatomic, readonly) int quality;

+ (void)prewarmRendererForDevice:(id)arg1 colorSize:(struct { long long x1; long long x2; })arg2 disparitySize:(struct { long long x1; long long x2; })arg3 quality:(int)arg4 debugMode:(long long)arg5 globalRenderingMetadata:(id)arg6;
+ (void)renderOnDevice:(id)arg1 colorSize:(struct { long long x1; long long x2; })arg2 disparitySize:(struct { long long x1; long long x2; })arg3 quality:(int)arg4 debugMode:(long long)arg5 globalRenderingMetadata:(id)arg6 usingBlock:(id /* block */)arg7;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; })colorSize;
- (long long)debugMode;
- (id)description;
- (id)device;
- (struct { long long x1; long long x2; })disparitySize;
- (id)initWithDevice:(id)arg1 colorSize:(struct { long long x1; long long x2; })arg2 disparitySize:(struct { long long x1; long long x2; })arg3 quality:(int)arg4 debugMode:(long long)arg5;
- (bool)isInUse;
- (id)lastUseTime;
- (void)prepareToRenderWithMetadata:(id)arg1;
- (int)quality;
- (void)setInUse:(bool)arg1;
- (void)setLastUseTime:(id)arg1;

@end
