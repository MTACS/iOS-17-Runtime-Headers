
@interface BMBasketExtractor : NSObject {
    double  _samplingInterval;
    bool  _shouldStop;
}

@property (nonatomic, readonly) double samplingInterval;
@property bool shouldStop;

- (id)extractBasketsFromEvents:(id)arg1 itemTypes:(id)arg2;
- (id)extractBasketsFromEvents:(id)arg1 withTemporalFeatures:(bool)arg2;
- (id)extractDatedBasketsFromEvents:(id)arg1 itemTypes:(id)arg2;
- (id)extractTemporalItemsFromDate:(id)arg1;
- (id)initWithSamplingInterval:(double)arg1;
- (double)samplingInterval;
- (void)setShouldStop:(bool)arg1;
- (bool)shouldStop;
- (id)slotForHourOfDay:(id)arg1;
- (id)slotForHourOfDay:(id)arg1 slotDuration:(id)arg2;
- (void)terminateEarly;

@end
