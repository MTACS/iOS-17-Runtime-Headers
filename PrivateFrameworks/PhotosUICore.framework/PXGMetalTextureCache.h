
@interface PXGMetalTextureCache : NSObject {
    double  _ageLimit;
    unsigned long long  _capacity;
    NSMutableArray * _entries;
    PXGMetalRenderContext * _metalRenderContext;
    unsigned long long  _peakCount;
    unsigned long long  _peakMemory;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _sizeLimit;
}

@property double ageLimit;
@property unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) PXGMetalRenderContext *metalRenderContext;
@property (readonly) unsigned long long peakMemorySize;
@property (readonly) unsigned long long peakTextureCount;
@property unsigned long long sizeLimit;

- (void).cxx_destruct;
- (id)_description;
- (void)_enforceLimits;
- (void)_purgeOldestTexture;
- (double)ageLimit;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)metalRenderContext;
- (unsigned long long)peakMemorySize;
- (unsigned long long)peakTextureCount;
- (void)recycleTexture:(id)arg1;
- (void)setAgeLimit:(double)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setSizeLimit:(unsigned long long)arg1;
- (unsigned long long)sizeLimit;
- (id)textureWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned long long)arg2;

@end
