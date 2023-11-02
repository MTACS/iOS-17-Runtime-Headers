
@interface PHAnimatedImage : NSObject {
    double  _duration;
    unsigned long long  _frameCount;
    unsigned long long  _loopCount;
    PFAnimatedImage * _pf_animatedImage;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) PFAnimatedImage *pf_animatedImage;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;

+ (void)cancelAnimatedImageRequest:(long long)arg1;
+ (long long)requestAnimatedImageWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_initializePropertiesWithAnimatedImage:(id)arg1;
- (double)duration;
- (unsigned long long)frameCount;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(bool)arg3;
- (unsigned long long)loopCount;
- (id)pf_animatedImage;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;

@end
