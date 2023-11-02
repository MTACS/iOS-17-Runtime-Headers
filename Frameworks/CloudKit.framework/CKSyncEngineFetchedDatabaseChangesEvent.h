
@interface CKSyncEngineFetchedDatabaseChangesEvent : CKSyncEngineEvent {
    NSArray * _deletions;
    NSArray * _modifications;
}

@property (nonatomic, readonly, copy) NSArray *deletions;
@property (nonatomic, readonly, copy) NSArray *modifications;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)deletions;
- (id)initWithModifications:(id)arg1 deletions:(id)arg2;
- (id)modifications;
- (long long)type;

@end
