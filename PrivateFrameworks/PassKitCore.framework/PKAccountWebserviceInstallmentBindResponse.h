
@interface PKAccountWebserviceInstallmentBindResponse : PKAccountWebServiceResponse {
    NSString * _bindToken;
}

@property (nonatomic, readonly, copy) NSString *bindToken;

- (void).cxx_destruct;
- (id)bindToken;
- (id)initWithData:(id)arg1;

@end
