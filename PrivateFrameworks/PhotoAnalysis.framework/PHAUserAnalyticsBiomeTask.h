
@interface PHAUserAnalyticsBiomeTask : NSObject <PHAPhotoLibraryTask> {
    short  _taskType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)initWithTaskType:(short)arg1;
- (id)name;
- (double)period;
- (int)priority;
- (void)pruneDeletedAssetsFromBiomeFrom:(id)arg1 progressReporter:(id)arg2;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)runWithPhotoLibrary:(id)arg1 analytics:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (bool)shouldRunWithPhotoLibrary:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
