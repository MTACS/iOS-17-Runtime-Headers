
@interface ICAgeVerificationState : NSObject <NSCopying> {
    ICAgeVerifier * _ageVerifier;
    NSError * _error;
    long long  _status;
    long long  _treatment;
    ICUserIdentity * _userIdentity;
    NSURL * _verificationURL;
}

@property (nonatomic, readonly, copy) ICAgeVerifier *ageVerifier;
@property (getter=isDynamic, nonatomic, readonly) bool dynamic;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExplicitContentAllowed, nonatomic, readonly) bool explicitContentAllowed;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) long long treatment;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, readonly, copy) NSURL *verificationURL;

+ (id)_stateFromDictionaryRepresentation:(id)arg1 DSID:(id)arg2;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withError:(id)arg2;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2 verificationURL:(id)arg3;
+ (id)cachedStateForDSID:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithDSID:(id)arg1;
- (id)_initWithUserIdentity:(id)arg1 status:(long long)arg2 treatment:(long long)arg3 verificationURL:(id)arg4 error:(id)arg5;
- (id)ageVerifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)error;
- (id)initWithUserIdentity:(id)arg1 ageVerifier:(id)arg2 treatment:(long long)arg3 verificationURL:(id)arg4;
- (bool)isDynamic;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContentAllowed;
- (void)saveToUserDefaults;
- (long long)status;
- (long long)treatment;
- (id)userIdentity;
- (id)verificationURL;

@end
