
@interface APOdmlCoreDataStorage : NSObject {
    NSError * _coreDataError;
    bool  _coreDataIsInitialized;
    int  _numLaunchesAttempted;
    NSPersistentContainer * _persistentContainer;
}

@property (nonatomic, retain) NSError *coreDataError;
@property (nonatomic) bool coreDataIsInitialized;
@property (nonatomic) int numLaunchesAttempted;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (id)coreDataError;
- (bool)coreDataIsInitialized;
- (void)createContainer;
- (id)init;
- (void)initializeCoreDataStackForClient;
- (void)initializeCoreDataStackForDaemon;
- (void)launchContainer;
- (void)makeApplicationSupportDirectory;
- (int)numLaunchesAttempted;
- (id)persistentContainer;
- (void)setContainerDescriptionClient;
- (void)setContainerDescriptionDaemon:(id)arg1;
- (void)setCoreDataError:(id)arg1;
- (void)setCoreDataIsInitialized:(bool)arg1;
- (void)setNumLaunchesAttempted:(int)arg1;
- (void)setPersistentContainer:(id)arg1;
- (id)storePrecheck;

@end
