
@interface PKPaymentWebServicePaginatedRequest : PKPaymentWebServiceRequest {
    PKPaginatedWebServiceResponse * _lastPageResponse;
    NSDate * _lastUpdated;
    NSNumber * _limit;
}

@property (nonatomic, retain) PKPaginatedWebServiceResponse *lastPageResponse;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic, copy) NSNumber *limit;

- (void).cxx_destruct;
- (id)lastPageResponse;
- (id)lastUpdated;
- (id)limit;
- (void)setLastPageResponse:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setLimit:(id)arg1;

@end
