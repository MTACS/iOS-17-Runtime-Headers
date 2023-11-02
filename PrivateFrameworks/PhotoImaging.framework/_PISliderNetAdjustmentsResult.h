
@interface _PISliderNetAdjustmentsResult : _NURenderResult <PISliderNetAdjustmentsResult> {
    NSDictionary * _adjustments;
    float  _similarityScore;
}

@property (copy) NSDictionary *adjustments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property float similarityScore;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adjustments;
- (id)description;
- (void)setAdjustments:(id)arg1;
- (void)setSimilarityScore:(float)arg1;
- (float)similarityScore;

@end
