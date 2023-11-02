
@interface PKAccountWebServicePromotionsResponse : PKAccountWebServiceResponse {
    NSDate * _lastAddedDate;
    NSNumber * _maxImpressionCount;
    NSNumber * _minRefreshPeriod;
    NSArray * _orderings;
    NSArray * _promotions;
    NSNumber * _timeVisibleAfterCompleted;
}

@property (nonatomic, readonly) NSDate *lastAddedDate;
@property (nonatomic, readonly) NSNumber *maxImpressionCount;
@property (nonatomic, readonly) NSNumber *minRefreshPeriod;
@property (nonatomic, readonly) NSArray *orderings;
@property (nonatomic, readonly) NSArray *promotions;
@property (nonatomic, readonly) NSNumber *timeVisibleAfterCompleted;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)lastAddedDate;
- (id)maxImpressionCount;
- (id)minRefreshPeriod;
- (id)orderings;
- (id)promotions;
- (id)timeVisibleAfterCompleted;

@end
