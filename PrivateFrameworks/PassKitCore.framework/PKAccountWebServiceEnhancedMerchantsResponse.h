
@interface PKAccountWebServiceEnhancedMerchantsResponse : PKAccountWebServiceResponse {
    NSDate * _lastAddedDate;
    NSArray * _merchants;
    NSNumber * _minRefreshPeriod;
    NSArray * _orderings;
}

@property (nonatomic, readonly) NSDate *lastAddedDate;
@property (nonatomic, readonly) NSArray *merchants;
@property (nonatomic, readonly) NSNumber *minRefreshPeriod;
@property (nonatomic, readonly) NSArray *orderings;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)lastAddedDate;
- (id)merchants;
- (id)minRefreshPeriod;
- (id)orderings;

@end
