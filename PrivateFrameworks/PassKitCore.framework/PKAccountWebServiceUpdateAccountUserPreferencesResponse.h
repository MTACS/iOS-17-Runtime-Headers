
@interface PKAccountWebServiceUpdateAccountUserPreferencesResponse : PKAccountWebServiceResponse {
    PKAccountUser * _accountUser;
}

@property (nonatomic, readonly) PKAccountUser *accountUser;

- (void).cxx_destruct;
- (id)accountUser;
- (id)initWithData:(id)arg1;

@end
