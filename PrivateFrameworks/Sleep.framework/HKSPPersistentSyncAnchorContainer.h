
@interface HKSPPersistentSyncAnchorContainer : HKSPSyncAnchorContainer {
    <HKSPUserDefaults> * _defaults;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)inMemoryCopy;
- (id)initWithIdentifier:(id)arg1 defaults:(id)arg2;
- (id)lock_getSyncAnchorForKey:(id)arg1;
- (void)lock_removeSyncAnchorForKey:(id)arg1;
- (void)lock_setSyncAnchor:(id)arg1 forKey:(id)arg2;

@end
