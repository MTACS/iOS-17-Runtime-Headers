
@interface DDSLinguisticAssetQuery : DDSAssetQuery

@property (nonatomic, readonly) DDSLinguisticAttributeFilter *filter;

- (void)addRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (id)initWithAssetType:(id)arg1 languageIdentifier:(id)arg2;
- (id)initWithLanguageIdentifier:(id)arg1;

@end
