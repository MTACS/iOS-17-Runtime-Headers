
@interface CLSAdminRequestAccount : CLSObject {
    CLSPerson * _accountPersonInfo;
    NSArray * _conflictingPersonIDs;
    NSString * _personID;
    NSArray * _requestedLocationIDs;
    NSString * _requestedRoleID;
    long long  _requestedRoleType;
    long long  _status;
    NSString * _temporaryPassword;
    NSString * _verificationCode;
}

@property (nonatomic, retain) CLSPerson *accountPersonInfo;
@property (nonatomic, copy) NSArray *conflictingPersonIDs;
@property (nonatomic, copy) NSString *personID;
@property (nonatomic, copy) NSArray *requestedLocationIDs;
@property (nonatomic, retain) NSString *requestedRoleID;
@property (nonatomic) long long requestedRoleType;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSString *temporaryPassword;
@property (nonatomic, copy) NSString *verificationCode;

+ (id)_propertyNames;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)accountPersonInfo;
- (id)conflictingPersonIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdminRequestID:(id)arg1 forAccountWithGivenName:(id)arg2 middleName:(id)arg3 familyName:(id)arg4 emailAddress:(id)arg5 appleID:(id)arg6 personNumber:(id)arg7 roleType:(long long)arg8 atLocationIDs:(id)arg9;
- (id)initWithAdminRequestID:(id)arg1 personID:(id)arg2;
- (id)initWithAdminRequestID:(id)arg1 personID:(id)arg2 roleType:(long long)arg3 atLocationIDs:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)personID;
- (id)requestedLocationIDs;
- (id)requestedRoleID;
- (long long)requestedRoleType;
- (void)setAccountPersonInfo:(id)arg1;
- (void)setConflictingPersonIDs:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setRequestedLocationIDs:(id)arg1;
- (void)setRequestedRole:(id)arg1;
- (void)setRequestedRoleID:(id)arg1;
- (void)setRequestedRoleType:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTemporaryPassword:(id)arg1;
- (void)setVerificationCode:(id)arg1;
- (long long)status;
- (id)temporaryPassword;
- (id)verificationCode;

@end
