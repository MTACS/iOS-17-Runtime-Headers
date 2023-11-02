
@interface _PUOneUpLivePhotoVariationSuggestionInfo : NSObject {
    PXAssetVariationRenderProvider * _renderProvider;
    long long  _variationType;
}

@property (nonatomic, retain) PXAssetVariationRenderProvider *renderProvider;
@property (nonatomic) long long variationType;

- (void).cxx_destruct;
- (id)renderProvider;
- (void)setRenderProvider:(id)arg1;
- (void)setVariationType:(long long)arg1;
- (long long)variationType;

@end
