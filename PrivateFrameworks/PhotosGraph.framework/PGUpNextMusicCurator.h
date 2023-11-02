
@interface PGUpNextMusicCurator : NSObject {
    bool  _isAppleMusicSubscriber;
    NSObject<OS_os_log> * _loggingConnection;
}

+ (id)_appleMusicCurationWithFeaturesByMemory:(id)arg1 musicCuratorContext:(id)arg2 managerContext:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)_baseMemoryFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)_flexMusicCurationWithFeaturesByMemory:(id)arg1 musicCurationOptions:(id)arg2 musicCuratorContext:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)_photosGraphPropertiesForMemory:(id)arg1 musicCurationFeatures:(id)arg2 appleMusicCuration:(id)arg3 flexMusicCuration:(id)arg4 isAppleMusicSubscriber:(bool)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (id)_appleMusicCurationForMemories:(id)arg1 curatorContext:(id)arg2 managerContext:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
- (id)_flexMusicCurationForMemories:(id)arg1 curatorContext:(id)arg2 musicCurationOptions:(id)arg3 managerContext:(id)arg4 progressReporter:(id)arg5 error:(id*)arg6;
- (id)_musicCurationFeaturesForMemories:(id)arg1 musicExtractionContext:(id)arg2 managerContext:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
- (bool)curateMusicForUpNextMemoriesWithLocalIdentifiers:(id)arg1 musicCurationOptions:(id)arg2 photoLibrary:(id)arg3 managerContext:(id)arg4 error:(id*)arg5;
- (id)initWithLoggingConnection:(id)arg1;

@end
