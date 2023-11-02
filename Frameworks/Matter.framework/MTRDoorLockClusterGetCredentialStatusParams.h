
@interface MTRDoorLockClusterGetCredentialStatusParams : NSObject <NSCopying> {
    MTRDoorLockClusterCredentialStruct * _credential;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) MTRDoorLockClusterCredentialStruct *credential;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setCredential:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
