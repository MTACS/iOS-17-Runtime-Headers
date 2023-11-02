
@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    <UNSHybridContentProtectionStrategyDelegate> * _delegate;
    NSString * _minimumProtection;
    bool  _needsMerge;
    UNSAtomicDataContentProtectionStrategy * _protectedContentAvailableStrategy;
    UNSFileHandleContentProtectionStrategy * _protectedContentUnavailableStrategy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_mergeIsSupported;
- (id)_strategyForProtectionState;
- (id)dataAtPath:(id)arg1;
- (bool)dataIsAvailableAtPath:(id)arg1;
- (void)importDataWithImportHandler:(id /* block */)arg1;
- (id)initWithFileProtectionType:(id)arg1 excludeFromBackup:(bool)arg2 delegate:(id)arg3;
- (bool)isProtectedDataAvailable;
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
- (bool)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3;

@end
