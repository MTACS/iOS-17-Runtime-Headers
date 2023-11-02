
@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding> {
    NSNumber * _loginChoice;
    NSString * _rawAccountPassword;
    bool  _requestParentalPermission;
    <AKCredentialRequestProtocol> * _selectedRequest;
    AKAuthorizationScopesUserSelection * _userSelection;
}

@property (nonatomic, retain) NSNumber *loginChoice;
@property (nonatomic, copy) NSString *rawAccountPassword;
@property (nonatomic) bool requestParentalPermission;
@property (nonatomic, retain) <AKCredentialRequestProtocol> *selectedRequest;
@property (nonatomic, retain) AKAuthorizationScopesUserSelection *userSelection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loginChoice;
- (id)rawAccountPassword;
- (bool)requestParentalPermission;
- (id)selectedRequest;
- (void)setLoginChoice:(id)arg1;
- (void)setRawAccountPassword:(id)arg1;
- (void)setRequestParentalPermission:(bool)arg1;
- (void)setSelectedRequest:(id)arg1;
- (void)setUserSelection:(id)arg1;
- (id)userSelection;

@end
