
@interface PKAccountWebServiceAccountResponse : PKAccountWebServiceResponse {
    PKAccount * _account;
}

@property (nonatomic, readonly, copy) PKAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)initWithData:(id)arg1;

@end
