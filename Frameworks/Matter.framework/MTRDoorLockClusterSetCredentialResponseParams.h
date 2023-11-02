
@interface MTRDoorLockClusterSetCredentialResponseParams : NSObject <NSCopying> {
    NSNumber * _nextCredentialIndex;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
}

@property (nonatomic, copy) NSNumber *nextCredentialIndex;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)nextCredentialIndex;
- (void)setNextCredentialIndex:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;

@end
