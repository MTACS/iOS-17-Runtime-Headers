
@interface MTRDoorLockClusterCredentialStruct : NSObject <NSCopying> {
    NSNumber * _credentialIndex;
    NSNumber * _credentialType;
}

@property (nonatomic, copy) NSNumber *credentialIndex;
@property (nonatomic, copy) NSNumber *credentialType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIndex;
- (id)credentialType;
- (id)description;
- (id)init;
- (void)setCredentialIndex:(id)arg1;
- (void)setCredentialType:(id)arg1;

@end
