
@interface CKDAppContainerTuple : NSObject <NSCopying> {
    CKDApplicationID * _applicationID;
    CKContainerID * _containerID;
    NSString * _personaID;
}

@property (nonatomic, readonly, copy) CKDApplicationID *applicationID;
@property (nonatomic, readonly, copy) CKContainerID *containerID;
@property (nonatomic, readonly, copy) NSString *personaID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)applicationID;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithApplicationID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)personaID;

@end
