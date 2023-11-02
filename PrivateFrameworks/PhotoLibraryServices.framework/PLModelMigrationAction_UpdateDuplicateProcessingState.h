
@interface PLModelMigrationAction_UpdateDuplicateProcessingState : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (long long)actionProgressWeight;

- (id)fetchRequestForAnimated;
- (id)fetchRequestForAudioVideo;
- (id)fetchRequestForDocument;
- (id)fetchRequestForExposureScore;
- (id)fetchRequestForScreenshot;
- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;
- (long long)processAssetStateMap:(id)arg1 pendingParentUnitCount:(long long)arg2 context:(id)arg3 error:(id*)arg4;
- (long long)updateDuplicateProcessingStateWithProcessingState:(unsigned short)arg1 pendingParentUnitCount:(long long)arg2 assetProcessingStateMap:(id)arg3 context:(id)arg4 request:(id)arg5 error:(id*)arg6;
- (long long)updateSceneClassificationDuplicateProcessingStateWithProcessingState:(unsigned short)arg1 pendingParentUnitCount:(long long)arg2 assetProcessingStateMap:(id)arg3 context:(id)arg4 request:(id)arg5 error:(id*)arg6;

@end
