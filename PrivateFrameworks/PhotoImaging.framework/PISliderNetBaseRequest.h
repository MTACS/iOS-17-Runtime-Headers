
@interface PISliderNetBaseRequest : NURenderRequest {
    NSData * _assetScenePrint;
    NUColorSpace * _colorSpace;
    <NUScalePolicy> * _scalePolicy;
    IHKSliderNetCPModel * _sliderNetModel;
}

@property (nonatomic, copy) NSData *assetScenePrint;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, retain) <NUScalePolicy> *scalePolicy;
@property (nonatomic, retain) IHKSliderNetCPModel *sliderNetModel;

- (void).cxx_destruct;
- (id)assetScenePrint;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1 sliderNetModel:(id)arg2;
- (id)scalePolicy;
- (void)setAssetScenePrint:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)setSliderNetModel:(id)arg1;
- (id)sliderNetModel;

@end
