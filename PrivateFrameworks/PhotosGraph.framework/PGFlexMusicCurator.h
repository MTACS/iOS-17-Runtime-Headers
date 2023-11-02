
@interface PGFlexMusicCurator : NSObject

+ (id)curateFlexMusicWithCurationParameters:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
+ (id)generateDebugInformationForAssetCollection:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (id)generateDebugInformationForSongWithUID:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;

- (id)init;

@end
