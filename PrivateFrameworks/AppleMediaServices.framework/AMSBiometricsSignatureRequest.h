
@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSString * _challenge;
    AMSProcessInfo * _clientInfo;
    bool  _dualAction;
    AMSKeychainOptions * _keychainOptions;
    struct __SecAccessControl { } * _localAuthAccessControlRef;
    LAContext * _localAuthContext;
    NSDictionary * _localAuthOptions;
    bool  _useApplePayClassic;
    bool  _useAutoEnrollment;
}

@property (nonatomic, readonly, copy) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly, copy) NSString *challenge;
@property (nonatomic, readonly, copy) AMSProcessInfo *clientInfo;
@property (getter=isDualAction, nonatomic) bool dualAction;
@property (nonatomic, readonly) AMSKeychainOptions *keychainOptions;
@property (nonatomic, readonly) struct __SecAccessControl { }*localAuthAccessControlRef;
@property (nonatomic, readonly) LAContext *localAuthContext;
@property (nonatomic, readonly) NSDictionary *localAuthOptions;
@property (getter=shouldUseApplePayClassic, nonatomic) bool useApplePayClassic;
@property (getter=shouldUseAutoEnrollment, nonatomic) bool useAutoEnrollment;

+ (id)biometricsSignatureRequestForURLResponse:(id)arg1 account:(id)arg2 session:(id)arg3 task:(id)arg4 clientInfo:(id)arg5 options:(id)arg6 error:(id*)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_localAuthOptions;
- (id)account;
- (id)bag;
- (id)challenge;
- (id)clientInfo;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 clientInfo:(id)arg2 challenge:(id)arg3 localAuthContext:(id)arg4 options:(id)arg5 error:(id*)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isDualAction;
- (id)keychainOptions;
- (struct __SecAccessControl { }*)localAuthAccessControlRef;
- (id)localAuthContext;
- (id)localAuthOptions;
- (void)setBag:(id)arg1;
- (void)setDualAction:(bool)arg1;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl { }*)arg1;
- (void)setUseApplePayClassic:(bool)arg1;
- (void)setUseAutoEnrollment:(bool)arg1;
- (bool)shouldUseApplePayClassic;
- (bool)shouldUseAutoEnrollment;

@end
