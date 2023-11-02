
@interface WFDeletionAuthorizationState : NSObject <NSSecureCoding, WFSerializableContent> {
    NSString * _actionUUID;
    NSString * _contentItemClassName;
    unsigned long long  _count;
    NSString * _status;
}

@property (nonatomic, readonly, copy) NSString *actionUUID;
@property (nonatomic, readonly, copy) NSString *contentItemClassName;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *status;
@property (readonly) Class superclass;

+ (id)deniedPermissionsErrorForContentItemClass:(Class)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)stateFromDatabaseData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionUUID;
- (id)contentItemClassName;
- (unsigned long long)count;
- (id)databaseDataWithError:(id*)arg1;
- (id)deniedPermissionsError;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(id)arg1 contentItemClassName:(id)arg2 actionUUID:(id)arg3 count:(unsigned long long)arg4;
- (id)localizedExfiltrationRestrictedError;
- (id)siriActionToolDescription;
- (id)stateWithStatus:(id)arg1 count:(unsigned long long)arg2;
- (id)status;
- (id)wfSerializedRepresentation;

@end
