
@interface CLSCollaborationStateChange : CLSObject {
    NSMutableSet * _changedDomains;
    NSSet * _deletedDomains;
    NSString * _ownerPersonID;
    NSString * _recipientPersonID;
    NSString * _senderPersonID;
    NSMutableArray * _states;
    NSString * _targetClassID;
    NSString * _targetEntityName;
    NSString * _targetObjectID;
}

@property (nonatomic, copy) NSSet *changedDomains;
@property (nonatomic, copy) NSSet *deletedDomains;
@property (nonatomic, copy) NSString *ownerPersonID;
@property (nonatomic, copy) NSString *recipientPersonID;
@property (nonatomic, copy) NSString *senderPersonID;
@property (nonatomic, copy) NSArray *states;
@property (nonatomic, copy) NSString *targetClassID;
@property (nonatomic, copy) NSString *targetEntityName;
@property (nonatomic, copy) NSString *targetObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_addStateForDomain:(long long)arg1 domainVersion:(long long)arg2 state:(long long)arg3 flags:(unsigned long long)arg4 note:(id)arg5 assetURL:(id)arg6 assets:(id)arg7;
- (id)_init;
- (bool)addStateForDomain:(long long)arg1 domainVersion:(long long)arg2 state:(long long)arg3 flags:(unsigned long long)arg4 note:(id)arg5 assetURL:(id)arg6;
- (bool)addStateForDomain:(long long)arg1 domainVersion:(long long)arg2 state:(long long)arg3 flags:(unsigned long long)arg4 note:(id)arg5 assets:(id)arg6;
- (bool)addStates:(id)arg1;
- (bool)addValidStates:(id)arg1;
- (id)changedDomains;
- (id)deletedDomains;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChanges;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 ownerPersonID:(id)arg2 targetClassID:(id)arg3 recipientPersonID:(id)arg4;
- (void)mergeChangesFrom:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)ownerPersonID;
- (id)recipientPersonID;
- (void)removeStateForDomain:(long long)arg1;
- (id)senderPersonID;
- (bool)setAssetURL:(id)arg1 forDomain:(long long)arg2;
- (void)setChangedDomains:(id)arg1;
- (bool)setClassID:(id)arg1 forDomain:(long long)arg2;
- (void)setDeletedDomains:(id)arg1;
- (bool)setDomainVersion:(long long)arg1 forDomain:(long long)arg2;
- (bool)setFlags:(unsigned long long)arg1 forDomain:(long long)arg2;
- (bool)setInfoValue:(id)arg1 forKey:(id)arg2 forDomain:(long long)arg3;
- (bool)setNote:(id)arg1 forDomain:(long long)arg2;
- (void)setOwnerPersonID:(id)arg1;
- (void)setRecipientPersonID:(id)arg1;
- (void)setSenderPersonID:(id)arg1;
- (bool)setState:(long long)arg1 forDomain:(long long)arg2;
- (void)setStates:(id)arg1;
- (void)setTargetClassID:(id)arg1;
- (void)setTargetEntityName:(id)arg1;
- (void)setTargetObjectID:(id)arg1;
- (id)stateForDomain:(long long)arg1;
- (id)states;
- (id)targetClassID;
- (id)targetEntityName;
- (id)targetObjectID;
- (bool)validateObject:(id*)arg1;

@end
