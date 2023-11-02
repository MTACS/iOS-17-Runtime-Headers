
@interface PKAccountWebServiceGenerateTopUpTokenResponse : PKAccountWebServiceResponse {
    PKAppleBalanceInStoreTopUpToken * _token;
}

@property (nonatomic, readonly, copy) PKAppleBalanceInStoreTopUpToken *token;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 account:(id)arg2 request:(id)arg3;
- (id)token;

@end
