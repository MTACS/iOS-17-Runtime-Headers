
@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <PXChangeObserver> {
    NSMutableDictionary * _infos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *infos;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_recommendedVariationTypeForAsset:(id)arg1;
- (bool)canProvideSuggestionForAsset:(id)arg1;
- (id)infos;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
