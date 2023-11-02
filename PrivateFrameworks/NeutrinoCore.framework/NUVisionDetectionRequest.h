
@interface NUVisionDetectionRequest : NURenderRequest <NUTimeBased> {
    <NUScalePolicy> * _scalePolicy;
    NSArray * _visionRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NUScalePolicy> *scalePolicy;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, copy) NSArray *visionRequests;

+ (void)warmUpRequests:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)scalePolicy;
- (void)setScalePolicy:(id)arg1;
- (void)setVisionRequests:(id)arg1;
- (void)submit:(id /* block */)arg1;
- (id)submitGenericSynchronous:(out id*)arg1;
- (id)visionRequests;

@end
