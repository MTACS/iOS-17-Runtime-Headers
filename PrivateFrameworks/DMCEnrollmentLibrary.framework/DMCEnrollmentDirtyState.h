
@interface DMCEnrollmentDirtyState : NSObject {
    NSMutableDictionary * _stateDictionary;
}

@property (nonatomic, readonly) NSArray *dirtyAltDISDs;
@property (nonatomic, readonly) NSArray *dirtyBundleIDs;
@property (nonatomic, readonly) NSArray *dirtyPersonaIDs;
@property (nonatomic, readonly) NSArray *dirtyProfileIdentifiers;
@property (nonatomic, readonly) NSArray *dirtyRMAccounts;
@property (nonatomic, retain) NSMutableDictionary *stateDictionary;

- (void).cxx_destruct;
- (void)_addValue:(id)arg1 toArrayForKey:(id)arg2;
- (void)_removeValue:(id)arg1 fromArrayForKey:(id)arg2;
- (void)addDirtyAltDSID:(id)arg1;
- (void)addDirtyBundleID:(id)arg1;
- (void)addDirtyPersonaID:(id)arg1;
- (void)addDirtyProfileIdentifier:(id)arg1;
- (void)addDirtyRMAccount:(id)arg1;
- (id)dictionary;
- (id)dirtyAltDISDs;
- (id)dirtyBundleIDs;
- (id)dirtyPersonaIDs;
- (id)dirtyProfileIdentifiers;
- (id)dirtyRMAccounts;
- (id)initWithDictionary:(id)arg1;
- (void)removeDirtyAltDSID:(id)arg1;
- (void)removeDirtyBundleID:(id)arg1;
- (void)removeDirtyPersonaID:(id)arg1;
- (void)removeDirtyProfileIdentifier:(id)arg1;
- (void)removeDirtyRMAccount:(id)arg1;
- (void)setStateDictionary:(id)arg1;
- (id)stateDictionary;

@end
