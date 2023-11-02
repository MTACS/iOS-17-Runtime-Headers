
@interface MTRDoorLockClusterSetUserParams : NSObject <NSCopying> {
    NSNumber * _credentialRule;
    NSNumber * _operationType;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSString * _userName;
    NSNumber * _userStatus;
    NSNumber * _userType;
    NSNumber * _userUniqueID;
}

@property (nonatomic, copy) NSNumber *credentialRule;
@property (nonatomic, copy) NSNumber *operationType;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSNumber *userStatus;
@property (nonatomic, copy) NSNumber *userType;
@property (nonatomic, copy) NSNumber *userUniqueID;
@property (nonatomic, copy) NSNumber *userUniqueId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialRule;
- (id)description;
- (id)init;
- (id)operationType;
- (id)serverSideProcessingTimeout;
- (void)setCredentialRule:(id)arg1;
- (void)setOperationType:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
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
