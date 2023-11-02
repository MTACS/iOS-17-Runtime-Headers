
@interface HMDPhotoLibraryPersonImporter : HMFObject <HMDPersonDataInterface, HMDPhotoLibraryObserverDelegate, HMFLogging> {
    NSUUID * _UUID;
    HMDCloudPhotosSettingObserver * _cloudPhotosSettingObserver;
    <HMDPersonDataSource> * _dataSource;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    HMDPhotoLibrary * _photoLibrary;
    HMDPhotoLibraryObserver * _photoLibraryObserver;
    id /* block */  _photoLibraryObserverFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver;
@property <HMDPersonDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) HMDPhotoLibrary *photoLibrary;
@property (retain) HMDPhotoLibraryObserver *photoLibraryObserver;
@property (copy) id /* block */ photoLibraryObserverFactory;
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)_configure;
- (void)_handleUpdatedCloudPhotosSetting;
- (void)_registerForNotifications;
- (void)_submitLogEventForFaceCrops:(id)arg1;
- (void)_submitLogEventsForUpdatedPersonsWithCurrentPersons:(id)arg1 previousPersons:(id)arg2;
- (void)_unconfigure;
- (void)_updateFaceCropsForAllPersonsUsingCurrentPersons:(id)arg1 batchChange:(id)arg2;
- (void)_updateFaceCropsForPersons:(id)arg1 usingBatchChange:(id)arg2;
- (void)_updateFaceCropsForPersonsWithUpdatedPhotosFaceCropsUsingCurrentPersons:(id)arg1 batchChange:(id)arg2;
- (void)_updateFaceCropsWithCurrentPhotoLibraryFaceCrops:(id)arg1 forPersonWithUUID:(id)arg2 usingBatchChange:(id)arg3;
- (void)_updatePersonsAndFaceCrops:(bool)arg1;
- (id)_updatePersonsUsingBatchChange:(id)arg1;
- (id)cloudPhotosSettingObserver;
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;
- (id)dataSource;
- (void)handleCloudPhotosEnabledDidChangeNotification:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2 workQueue:(id)arg3 cloudPhotosSettingObserver:(id)arg4 logEventSubmitter:(id)arg5;
- (id)logEventSubmitter;
- (id)logIdentifier;
- (void)observerDidObserveMajorChange:(id)arg1;
- (void)observerDidObserveMinorChange:(id)arg1;
- (id)photoLibrary;
- (id)photoLibraryObserver;
- (id /* block */)photoLibraryObserverFactory;
- (void)setDataSource:(id)arg1;
- (void)setPhotoLibraryObserver:(id)arg1;
- (void)setPhotoLibraryObserverFactory:(id /* block */)arg1;
- (id)workQueue;

@end
