
@interface HMDVendorDataManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSDictionary * _collectionsByManufacturer;
    long long  _dataVersion;
    NSDictionary * _entriesByProductData;
    HMFTimer * _fetchTimer;
    NSURLSession * _urlSession;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSDictionary *collectionsByManufacturer;
@property (nonatomic) long long dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *entriesByProductData;
@property (nonatomic, readonly) HMFTimer *fetchTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *urlForBundledInternalPlist;
@property (nonatomic, readonly) NSURL *urlForBundledPlist;
@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)dbURL;
+ (id)logCategory;
+ (id)sharedVendorDataManager;

- (void).cxx_destruct;
- (void)_fetchDataFromServer;
- (void)_handleDataFromServer:(id)arg1;
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (bool)_loadDatabaseFromDictionary:(id)arg1;
- (bool)_loadDatabaseFromFilePath:(id)arg1 fileDescription:(id)arg2;
- (bool)_loadDatabaseFromFileURL:(id)arg1 fileDescription:(id)arg2;
- (void)_loadDatabaseFromLocalFiles;
- (id)_modelsStringForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 key:(id)arg4;
- (bool)_parseDatabaseFromDictionary:(id)arg1 dataVersion:(long long*)arg2 collectionsByManufacturer:(id*)arg3 entriesByProductData:(id*)arg4;
- (bool)_parseManufacturersList:(id)arg1 collectionsByManufacturer:(id*)arg2 entriesByProductData:(id*)arg3;
- (id)_parseVendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3;
- (void)_start;
- (id)collectionsByManufacturer;
- (long long)dataVersion;
- (bool)databaseContainsManufacturer:(id)arg1;
- (id)entriesByProductData;
- (id)fetchTimer;
- (id)init;
- (id)initWithDefaults;
- (id)initWithWorkQueue:(id)arg1 urlSession:(id)arg2 fetchTimer:(id)arg3;
- (id)modelCollectionForManufacturer:(id)arg1;
- (void)setCollectionsByManufacturer:(id)arg1;
- (void)setDataVersion:(long long)arg1;
- (void)setEntriesByProductData:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)urlForBundledInternalPlist;
- (id)urlForBundledPlist;
- (id)urlSession;
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (id)vendorModelEntryForProductData:(id)arg1;
- (id)workQueue;

@end
