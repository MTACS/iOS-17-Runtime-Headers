
@interface HDSPSyncedDefaultsConfiguration : NSObject {
    HDSPSyncedDefaultsInfo * _info;
    NSDictionary * _keySetMap;
}

@property (nonatomic, readonly) NSDictionary *allDefaultValues;
@property (nonatomic, readonly) NSSet *allKeysToPersist;
@property (nonatomic, readonly) NSSet *allKeysToSync;
@property (nonatomic, readonly) NSSet *allPerGizmoKeys;
@property (nonatomic, readonly) HDSPSyncedDefaultsInfo *info;
@property (nonatomic, readonly) NSArray *keySets;

- (void).cxx_destruct;
- (id)_accumulateKeysWithBlock:(id /* block */)arg1 includeVersionInfo:(bool)arg2 isForSync:(bool)arg3;
- (id)_createKeySetMapForKeySets:(id)arg1;
- (id)_keySetForKey:(id)arg1;
- (id)allDefaultValues;
- (id)allKeysToPersist;
- (id)allKeysToSync;
- (id)allPerGizmoKeys;
- (id)filteredKeySetsWithKeysToSync:(id)arg1;
- (id)info;
- (id)initWithInfo:(id)arg1 keySets:(id)arg2;
- (id)keySetForIdentifier:(id)arg1;
- (id)keySets;
- (bool)shouldPersistKey:(id)arg1;
- (bool)shouldSyncKey:(id)arg1;

@end
