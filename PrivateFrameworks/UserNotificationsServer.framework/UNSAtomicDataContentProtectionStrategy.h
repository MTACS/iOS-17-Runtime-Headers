
@interface UNSAtomicDataContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    unsigned long long  _dataWritingFileProtection;
    bool  _excludeFromBackup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_dataWritingOptionForFileProtectionType:(id)arg1;
- (id)dataAtPath:(id)arg1;
- (bool)dataIsAvailableAtPath:(id)arg1;
- (id)initWithFileProtectionType:(id)arg1 excludeFromBackup:(bool)arg2;
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
- (bool)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3;

@end
