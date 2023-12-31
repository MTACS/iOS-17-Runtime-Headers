
@interface PVCameraPreviewRequest : NSObject {
    NSDictionary * _effectProperties;
    NSMutableArray * _effects;
    NSArray * _metadataObjects;
    bool  _mirrored;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, copy) NSDictionary *effectProperties;
@property (nonatomic, retain) NSMutableArray *effects;
@property (nonatomic, copy) NSArray *metadataObjects;
@property (nonatomic) bool mirrored;
@property (nonatomic) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (oneway void)dealloc;
- (id)effectProperties;
- (id)effects;
- (id)metadataObjects;
- (bool)mirrored;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (void)setEffectProperties:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setMetadataObjects:(id)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
