
@interface ARImageNoiseTexture : NSObject {
    float  _lastSNR;
    float  _maxSNR;
    float  _minSNR;
    float  _nSteps;
    NSObject<OS_dispatch_queue> * _queue;
    <MTLTexture> * _texture;
}

@property (nonatomic, readonly) <MTLTexture> *texture;

+ (id)sharedInstanceForCameraPosition:(long long)arg1 longEdgeImageResolution:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)initWithNoiseModel:(int)arg1;
- (float)snrToNoiseIntensity:(float)arg1;
- (id)texture;

@end
