
@interface PLCloudSharingJob : PLDaemonJob {
    NSString * _archiveFilename;
    bool  _shouldPrioritize;
}

@property (nonatomic) bool shouldPrioritize;
@property (nonatomic, readonly) PLPhotoLibrary *transientPhotoLibrary;

+ (void)deleteAllRecoveryEventsWithPathManager:(id)arg1;
+ (id)highPriorityOperationQueue;
+ (id)lowPriorityOperationQueue;
+ (id)recoveredEventsWithPathManager:(id)arg1;

- (void).cxx_destruct;
- (void)archiveXPCToDisk:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)initWithAssetsdClient:(id)arg1;
- (void)runAndWaitForMessageToBeSent;
- (void)runDaemonSide;
- (void)setShouldPrioritize:(bool)arg1;
- (bool)shouldArchiveXPCToDisk;
- (bool)shouldPrioritize;
- (id)transientPhotoLibrary;

@end
