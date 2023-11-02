
@interface _REMDefaultReplicaManagerProvider : NSObject <REMReplicaManagerProviding> {
    REMStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REMStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)replicaManagerForAccountID:(id)arg1;
- (id)store;
- (id)unsavedReplicaManagersForAccountIDs:(id)arg1;

@end
