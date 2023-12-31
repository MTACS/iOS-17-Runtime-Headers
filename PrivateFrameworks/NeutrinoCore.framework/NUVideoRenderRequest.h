
@interface NUVideoRenderRequest : NURenderRequest {
    NUColorSpace * _colorSpace;
    <NUScalePolicy> * _scalePolicy;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)scalePolicy;
- (void)setColorSpace:(id)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
