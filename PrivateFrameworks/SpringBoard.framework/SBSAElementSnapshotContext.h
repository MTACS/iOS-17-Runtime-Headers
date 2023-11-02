
@interface SBSAElementSnapshotContext : NSObject <NSCopying, SAElementIdentifying, SAUISnapshotReasonProviding, SBSABlockMutating> {
    NSString * _clientIdentifier;
    NSString * _elementIdentifier;
    NSString * _snapshotReason;
}

@property (setter=_setClientIdentifier:, nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setElementIdentifier:, nonatomic, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (setter=_setSnapshotReason:, nonatomic, copy) NSString *snapshotReason;
@property (readonly) Class superclass;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setClientIdentifier:(id)arg1;
- (void)_setElementIdentifier:(id)arg1;
- (void)_setSnapshotReason:(id)arg1;
- (id)clientIdentifier;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementIdentifier;
- (unsigned long long)hash;
- (id)initWithSnapshotIdentity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)snapshotReason;

@end
