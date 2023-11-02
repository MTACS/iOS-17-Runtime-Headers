
@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject {
    HDDatabaseTransactionContext * _databaseContext;
    NSCalendar * _gregorianCalendar;
    HKHealthStore * _healthStore;
    HDKeyValueDomain * _keyValueDomain;
    HKKeyValueDomain * _kvDomain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
}

@property (nonatomic, copy) HDDatabaseTransactionContext *databaseContext;
@property (nonatomic, copy) NSCalendar *gregorianCalendar;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HDKeyValueDomain *keyValueDomain;
@property (nonatomic, retain) HKKeyValueDomain *kvDomain;
@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (id)_daemon_allCachedTemplatesWithError:(id*)arg1;
- (bool)_daemon_cacheTemplate:(id)arg1 error:(id*)arg2;
- (id)_daemon_templateForDateComponents:(id)arg1 error:(id*)arg2;
- (id)_store_allCachedTemplatesWithError:(id*)arg1;
- (bool)_store_cacheTemplate:(id)arg1 error:(id*)arg2;
- (id)_store_templateForDateComponents:(id)arg1 error:(id*)arg2;
- (id)allCachedTemplatesWithError:(id*)arg1;
- (bool)cacheTemplate:(id)arg1 error:(id*)arg2;
- (id)databaseContext;
- (id)gregorianCalendar;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)keyValueDomain;
- (id)kvDomain;
- (id)profile;
- (void)setDatabaseContext:(id)arg1;
- (void)setGregorianCalendar:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setKeyValueDomain:(id)arg1;
- (void)setKvDomain:(id)arg1;
- (void)setProfile:(id)arg1;
- (id)templateForDateComponents:(id)arg1 error:(id*)arg2;

@end
