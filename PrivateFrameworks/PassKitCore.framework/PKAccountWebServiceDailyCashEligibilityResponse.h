
@interface PKAccountWebServiceDailyCashEligibilityResponse : PKAccountWebServiceResponse {
    PKAccountDailyCashDestinationsSummary * _summary;
}

@property (nonatomic, readonly, copy) PKAccountDailyCashDestinationsSummary *summary;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)summary;

@end
