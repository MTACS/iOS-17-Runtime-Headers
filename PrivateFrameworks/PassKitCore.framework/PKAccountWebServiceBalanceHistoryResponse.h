
@interface PKAccountWebServiceBalanceHistoryResponse : PKAccountWebServiceResponse {
    NSArray * _balances;
}

@property (nonatomic, readonly, copy) NSArray *balances;

- (void).cxx_destruct;
- (id)balances;
- (id)initWithData:(id)arg1;

@end
