
@interface PKAccountWebServiceSavingsUserInfoResponse : PKAccountWebServiceResponse {
    PKSavingsAccountUserInfo * _userInfo;
}

@property (nonatomic, readonly, copy) PKSavingsAccountUserInfo *userInfo;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)userInfo;

@end
