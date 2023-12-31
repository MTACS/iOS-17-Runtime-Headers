
@interface NULivePhotoRenderRequest : NURenderRequest {
    NUColorSpace * _colorSpace;
    <NUScalePolicy> * _scalePolicy;
    NURenderContext * _stillBufferRenderContext;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (id)livePhotoRenderResultFromPhotoResponse:(id)arg1 videoResponse:(id)arg2 propertiesResponse:(id)arg3 error:(out id*)arg4;
- (id)scalePolicy;
- (void)setColorSpace:(id)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
