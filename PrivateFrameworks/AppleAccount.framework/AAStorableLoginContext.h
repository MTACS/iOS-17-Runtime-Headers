
@interface AAStorableLoginContext : NSObject {
    NSString * _DSID;
    NSString * _altDSID;
    NSString * _appleID;
    bool  _beneficiaryLogin;
    NSString * _cloudKitToken;
    NSString * _continuationKey;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _passwordResetKey;
    NSString * _rawPassword;
}

@property (nonatomic, copy) NSString *DSID;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (getter=isBeneficiaryLogin, nonatomic) bool beneficiaryLogin;
@property (nonatomic, copy) NSString *cloudKitToken;
@property (nonatomic, copy) NSString *continuationKey;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *passwordResetKey;
@property (nonatomic, copy) NSString *rawPassword;

- (void).cxx_destruct;
- (id)DSID;
- (id)altDSID;
- (id)appleID;
- (id)cloudKitToken;
- (id)continuationKey;
- (id)firstName;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (bool)isBeneficiaryLogin;
- (id)lastName;
- (id)middleName;
- (id)passwordResetKey;
- (id)rawPassword;
- (void)setBeneficiaryLogin:(bool)arg1;
- (void)setCloudKitToken:(id)arg1;
- (void)setContinuationKey:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setPasswordResetKey:(id)arg1;
- (void)setRawPassword:(id)arg1;

@end
