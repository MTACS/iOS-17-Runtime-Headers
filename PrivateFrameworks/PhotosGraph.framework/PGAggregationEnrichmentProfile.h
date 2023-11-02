
@interface PGAggregationEnrichmentProfile : PGDayGroupAbstractEnrichmentProfile {
    PLDateRangeTitleGenerator * _dateRangeTitleGenerator;
}

@property (nonatomic, retain) PLDateRangeTitleGenerator *dateRangeTitleGenerator;

- (void).cxx_destruct;
- (bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)curationOptionsWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)dateRangeTitleGenerator;
- (id)identifier;
- (id)initWithCurationManager:(id)arg1 loggingConnection:(id)arg2;
- (double)promotionScoreWithHighlightInfo:(id)arg1;
- (void)setDateRangeTitleGenerator:(id)arg1;
- (id)titleWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 curatedAssets:(id)arg3 keyAsset:(id)arg4 createVerboseTitle:(bool)arg5;

@end
