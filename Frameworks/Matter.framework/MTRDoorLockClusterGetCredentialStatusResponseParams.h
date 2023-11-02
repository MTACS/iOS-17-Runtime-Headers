
@interface MTRDoorLockClusterGetCredentialStatusResponseParams : NSObject <NSCopying> {
    NSNumber * _creatorFabricIndex;
    NSNumber * _credentialExists;
    NSNumber * _lastModifiedFabricIndex;
    NSNumber * _nextCredentialIndex;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
}

@property (nonatomic, copy) NSNumber *creatorFabricIndex;
@property (nonatomic, copy) NSNumber *credentialExists;
@property (nonatomic, copy) NSNumber *lastModifiedFabricIndex;
@property (nonatomic, copy) NSNumber *nextCredentialIndex;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creatorFabricIndex;
- (id)credentialExists;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)lastModifiedFabricIndex;
- (id)nextCredentialIndex;
- (void)setCreatorFabricIndex:(id)arg1;
- (void)setCredentialExists:(id)arg1;
- (void)setLastModifiedFabricIndex:(id)arg1;
- (void)setNextCredentialIndex:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;

@end
