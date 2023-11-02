
@interface NUColorSampler : NSObject <NUTimeBased> {
    NUColorSpace * _colorSpace;
    NUComposition * _composition;
    NSString * _name;
    NUImageDataRequest * _request;
    NSObject<OS_dispatch_queue> * _responseQueue;
    long long  _sampleRadius;
    bool  _shouldCoalesceUpdates;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, copy) NUComposition *composition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NUImageDataRequest *request;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic) long long sampleRadius;
@property (nonatomic) bool shouldCoalesceUpdates;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)_pipelineFilters;
- (void)cancel;
- (id)colorSpace;
- (id)composition;
- (void)configureRequest:(id)arg1 forSamplingAtPoint:(struct { long long x1; long long x2; })arg2;
- (id)initWithComposition:(id)arg1;
- (id)initWithComposition:(id)arg1 responseQueue:(id)arg2;
- (id)name;
- (id)request;
- (id)responseQueue;
- (void)sampleColorAt:(struct { long long x1; long long x2; })arg1 completion:(id /* block */)arg2;
- (long long)sampleRadius;
- (void)setColorSpace:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setName:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)setSampleRadius:(long long)arg1;
- (void)setShouldCoalesceUpdates:(bool)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)shouldCoalesceUpdates;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
