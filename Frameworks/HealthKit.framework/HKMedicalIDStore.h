
@interface HKMedicalIDStore : NSObject <_HKXPCExportable> {
    _HKMedicalIDData * _lastFetchedMedicalIDData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKTaskServerProxyProvider * _proxyProvider;
    HKTaskServerProxyProvider * _setupStatusProxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long medicalIDSetUpStatus;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)setupStatusClientInterface;
+ (id)setupStatusServerInterface;
+ (id)setupStatusTaskIdentifier;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)addEmergencyContact:(id)arg1 completion:(id /* block */)arg2;
- (void)connectionInvalidated;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (void)fetchMedicalIDClinicalContactsWithCompletion:(id /* block */)arg1;
- (void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id /* block */)arg1;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)arg1;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)lastFetchedMedicalIDData;
- (long long)medicalIDSetUpStatus;
- (id)remoteInterface;
- (void)removeEmergencyContact:(id)arg1 completion:(id /* block */)arg2;
- (void)setLastFetchedMedicalIDData:(id)arg1;
- (void)updateMedicalIDData:(id)arg1 completion:(id /* block */)arg2;

@end
