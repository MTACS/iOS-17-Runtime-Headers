
@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse {
    NSString * _displayName;
    bool  _success;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithData:(id)arg1;
- (bool)success;

@end
