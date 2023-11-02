
@interface FCPersonalizationDataMigrator : NSObject <FCKeyValueStoreMigrating> {
    id /* block */  _treatmentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ treatmentProvider;

- (void).cxx_destruct;
- (id)initWithTreatmentProvider:(id /* block */)arg1;
- (bool)keyValueStore:(id)arg1 canMigrateFromVersion:(unsigned long long)arg2;
- (id)keyValueStore:(id)arg1 migrateObject:(id)arg2 forKey:(id)arg3 fromVersion:(unsigned long long)arg4;
- (id /* block */)treatmentProvider;
- (void)upgradeFromVersion2:(id)arg1;

@end
