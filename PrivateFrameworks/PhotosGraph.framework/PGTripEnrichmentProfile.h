
@interface PGTripEnrichmentProfile : PGDayGroupAbstractEnrichmentProfile

- (bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)curationOptionsWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)identifier;
- (double)promotionScoreWithHighlightInfo:(id)arg1;
- (id)titleWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 curatedAssets:(id)arg3 keyAsset:(id)arg4 createVerboseTitle:(bool)arg5;

@end
