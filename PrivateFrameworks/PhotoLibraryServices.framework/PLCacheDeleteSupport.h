
@interface PLCacheDeleteSupport : NSObject {
    NSDate * _exitDeleteTime;
    struct fsid { 
        int val[2]; 
    }  _fsid;
    PLLibraryServicesManager * _lsm;
}

@property (nonatomic, copy) NSDate *exitDeleteTime;

+ (id)_clearablePurgeableResourceDirectoriesForPathManager:(id)arg1;
+ (id)_purgeableResourceDirectoriesForPathManager:(id)arg1;
+ (id)_unclearablePurgeableResourceDirectoriesForPathManager:(id)arg1;
+ (bool)clearPurgeableFlagForResource:(id)arg1;
+ (bool)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg1;
+ (void)clearPurgeableIsCloneStateOnPurgeableResourcesOnceIfNecessaryInManagedObjectContext:(id)arg1 pathManager:(id)arg2;
+ (struct fsid { int x1[2]; })fsidForURL:(id)arg1;
+ (bool)isPurgeableFile:(id)arg1 outIsPhotoType:(bool*)arg2 outUrgencyLevel:(long long*)arg3 error:(id*)arg4;
+ (bool)markPurgeableForFileAtURL:(id)arg1 withUrgency:(long long)arg2 outInode:(unsigned long long*)arg3;
+ (bool)markPurgeableForFileAtURL:(id)arg1 withUrgency:(long long)arg2 outInode:(unsigned long long*)arg3 error:(id*)arg4;
+ (id)purgeableStateDescriptionForFile:(id)arg1;
+ (bool)setClearPurgeableIsCloneStateOnPurgeableResourcesOnceWithPathManager:(id)arg1 error:(id*)arg2;
+ (bool)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)arg1 countPresent:(long long*)arg2 countMissing:(long long*)arg3 countUnableToVerify:(long long*)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1 inLibrary:(id)arg2;
- (id)_newShortLivedPhotoLibrary;
- (bool)clearPurgeableFlagsForAllResources;
- (void)dealloc;
- (id)exitDeleteTime;
- (id)initWithLibraryServicesManager:(id)arg1 cplStatus:(id)arg2;
- (void)invalidate;
- (bool)isFilePurgedForFileID:(id)arg1 purgedPath:(id)arg2;
- (void)markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1;
- (bool)markResourceAsPurgeable:(id)arg1 withUrgency:(long long)arg2;
- (id)purgeableDirectories;
- (void)rescanResourcesFromFileSystem;
- (void)setExitDeleteTime:(id)arg1;

@end
