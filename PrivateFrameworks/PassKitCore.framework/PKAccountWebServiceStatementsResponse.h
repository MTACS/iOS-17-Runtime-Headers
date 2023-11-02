
@interface PKAccountWebServiceStatementsResponse : PKAccountWebServiceResponse {
    NSArray * _statements;
}

@property (nonatomic, readonly, copy) NSArray *statements;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)statements;

@end
