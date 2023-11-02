
@interface HKMedicationsCriticalNotificationsStore : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUserDefaults * _medicationsUserDefaults;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getIdentifiersSetFromMedications:(id)arg1;
- (id)_lock_getIdentifiersSet;
- (void)_lock_removeMedication:(id)arg1;
- (void)_lock_syncUserDefaultUpdateToNanoPreferences:(id /* block */)arg1;
- (void)_lock_writeToUserDefaultsWithNewIdentifier:(id)arg1;
- (void)addMedications:(id)arg1;
- (bool)containsAtLeastOneOfIdentifiers:(id)arg1;
- (bool)containsAtLeastOneOfMedications:(id)arg1;
- (long long)identifiersCount;
- (id)init;
- (void)removeAll;
- (void)removeMedication:(id)arg1;
- (void)setMedications:(id)arg1;

@end
