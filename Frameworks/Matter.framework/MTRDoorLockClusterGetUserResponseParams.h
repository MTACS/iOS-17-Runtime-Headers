
@interface MTRDoorLockClusterGetUserResponseParams : NSObject <NSCopying> {
    NSNumber * _creatorFabricIndex;
    NSNumber * _credentialRule;
    NSArray * _credentials;
    NSNumber * _lastModifiedFabricIndex;
    NSNumber * _nextUserIndex;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSString * _userName;
    NSNumber * _userStatus;
    NSNumber * _userType;
    NSNumber * _userUniqueID;
}

@property (nonatomic, copy) NSNumber *creatorFabricIndex;
@property (nonatomic, copy) NSNumber *credentialRule;
@property (nonatomic, copy) NSArray *credentials;
@property (nonatomic, copy) NSNumber *lastModifiedFabricIndex;
@property (nonatomic, copy) NSNumber *nextUserIndex;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSNumber *userStatus;
@property (nonatomic, copy) NSNumber *userType;
@property (nonatomic, copy) NSNumber *userUniqueID;
@property (nonatomic, copy) NSNumber *userUniqueId;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creatorFabricIndex;
- (id)credentialRule;
- (id)credentials;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)lastModifiedFabricIndex;
- (id)nextUserIndex;
- (void)setCreatorFabricIndex:(id)arg1;
- (void)setCredentialRule:(id)arg1;
- (void)setCredentials:(id)arg1;
- (void)setLastModifiedFabricIndex:(id)arg1;
- (void)setNextUserIndex:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserStatus:(id)arg1;
- (void)setUserType:(id)arg1;
- (void)setUserUniqueID:(id)arg1;
- (void)setUserUniqueId:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)userName;
- (id)userStatus;
- (id)userType;
- (id)userUniqueID;
- (id)userUniqueId;

@end
