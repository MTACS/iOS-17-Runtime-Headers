
@interface AAPaymentSummaryResponse : AAResponse {
    NSDictionary * _responseParameters;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long numberOfCards;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (unsigned long long)numberOfCards;

@end
