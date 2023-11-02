
@interface CallDBManager : NSObject <CHDeviceObserverDelegate> {
    unsigned char  _dataStoreType;
    DBManager * _dbManager;
    CHDeviceObserver * _deviceObserver;
    bool  _deviceUnlocked;
    unsigned char  _notifyDataStoreChangeReason;
}

@property unsigned char dataStoreType;
@property (nonatomic, retain) DBManager *dbManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CHDeviceObserver *deviceObserver;
@property bool deviceUnlocked;
@property (readonly) unsigned long long hash;
@property unsigned char notifyDataStoreChangeReason;
@property (readonly) Class superclass;

+ (id)dataStoreName;
+ (id)getDBLocationIsSandboxed:(bool)arg1 isTemporary:(bool)arg2 error:(unsigned char*)arg3;
+ (id)modelURL;

- (void).cxx_destruct;
- (void)createDataStore;
- (id)createManagedObjectContext;
- (void)createPermanent;
- (void)createTemporary;
- (unsigned char)dataStoreType;
- (id)dbManager;
- (id)deviceObserver;
- (bool)deviceUnlocked;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)arg1;
- (void)handlePermanentCreated;
- (void)handleTemporaryCreated;
- (id)init;
- (void)moveCallsFromTempDatabase;
- (unsigned char)notifyDataStoreChangeReason;
- (bool)notifyDataStoreChanged;
- (id)permDBLocation:(unsigned char*)arg1;
- (void)setDataStoreType:(unsigned char)arg1;
- (void)setDbManager:(id)arg1;
- (void)setDeviceObserver:(id)arg1;
- (void)setDeviceUnlocked:(bool)arg1;
- (void)setNotifyDataStoreChangeReason:(unsigned char)arg1;
- (bool)shouldCreatePermanent;
- (bool)shouldCreateTemporary;
- (id)tempDBLocation:(unsigned char*)arg1;

@end
