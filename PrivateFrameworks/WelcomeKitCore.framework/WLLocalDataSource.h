
@interface WLLocalDataSource : NSObject <WLMigrationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_localSourceDataPath;
+ (id)_relativePathForAccount:(id)arg1 migrator:(id)arg2;
+ (id)_relativePathForSummary:(id)arg1 migrator:(id)arg2;
+ (void)deleteLocalData;
+ (bool)localDataExists;
+ (void)stashData:(id)arg1 forSummary:(id)arg2 migrator:(id)arg3;
+ (void)stashFileForSummary:(id)arg1 migrator:(id)arg2;

- (void)accountsDataForMigrator:(id)arg1 completion:(id /* block */)arg2;
- (void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(id /* block */)arg3;
- (void)dataSegmentForSummary:(id)arg1 byteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 migrator:(id)arg3 completion:(id /* block */)arg4;
- (void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)itemSizeForSummary:(id)arg1 migrator:(id)arg2 completion:(id /* block */)arg3;
- (void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(id /* block */)arg3;
- (void)updateUIWithProgress:(double)arg1 remainingTime:(double)arg2 logString:(id)arg3 completion:(id /* block */)arg4;

@end
