
@interface MTRDoorLockClusterSetCredentialParams : NSObject <NSCopying> {
    MTRDoorLockClusterCredentialStruct * _credential;
    NSData * _credentialData;
    NSNumber * _operationType;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSNumber * _userStatus;
    NSNumber * _userType;
}

@property (nonatomic, copy) MTRDoorLockClusterCredentialStruct *credential;
@property (nonatomic, copy) NSData *credentialData;
@property (nonatomic, copy) NSNumber *operationType;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSNumber *userStatus;
@property (nonatomic, copy) NSNumber *userType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)credentialData;
- (id)description;
- (id)init;
- (id)operationType;
- (id)serverSideProcessingTimeout;
- (void)setCredential:(id)arg1;
- (void)setCredentialData:(id)arg1;
- (void)setOperationType:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setUserStatus:(id)arg1;
- (void)setUserType:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)userStatus;
- (id)userType;

@end
