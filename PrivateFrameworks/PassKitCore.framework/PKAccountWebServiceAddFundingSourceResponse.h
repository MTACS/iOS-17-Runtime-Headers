
@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse {
    PKAccountPaymentFundingSource * _fundingSource;
}

@property (nonatomic, readonly, copy) PKAccountPaymentFundingSource *fundingSource;

- (void).cxx_destruct;
- (id)fundingSource;
- (id)initWithData:(id)arg1;

@end
