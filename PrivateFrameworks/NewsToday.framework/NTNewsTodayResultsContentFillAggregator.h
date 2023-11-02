
@interface NTNewsTodayResultsContentFillAggregator : NSObject <NTTodayResultsAggregator> {
    <NTTodayResultsAggregator> * _aggregator;
    double  _maxHeadlineScale;
    double  _minHeadlineScale;
}

@property (nonatomic, retain) <NTTodayResultsAggregator> *aggregator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxHeadlineScale;
@property (nonatomic) double minHeadlineScale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3 scale:(double)arg4;
- (id)_bestResultOfResults:(id)arg1 withBudgetInfo:(id)arg2;
- (id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3;
- (id)aggregator;
- (id)init;
- (id)initWithAggregator:(id)arg1 minHeadlineScale:(double)arg2 maxHeadlineScale:(double)arg3;
- (double)maxHeadlineScale;
- (double)minHeadlineScale;
- (void)setAggregator:(id)arg1;
- (void)setMaxHeadlineScale:(double)arg1;
- (void)setMinHeadlineScale:(double)arg1;

@end
