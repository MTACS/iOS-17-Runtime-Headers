
@interface NUClassifyPipelineImageCorrectionRequest : NURenderRequest <NUTimeBased> {
    <NUScalePolicy> * _scalePolicy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <NUScalePolicy> *scalePolicy;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)scalePolicy;
- (void)setScalePolicy:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
