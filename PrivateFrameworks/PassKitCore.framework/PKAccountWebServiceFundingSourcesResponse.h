
@interface PKAccountWebServiceFundingSourcesResponse : PKAccountWebServiceResponse {
    NSArray * _fundingSources;
}

@property (nonatomic, readonly, copy) NSArray *fundingSources;

- (void).cxx_destruct;
- (id)fundingSources;
- (id)initWithData:(id)arg1;

@end
