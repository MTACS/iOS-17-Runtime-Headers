
@interface PGMusicAudioCacher : NSObject

+ (void)_addSongsWithAdamIDs:(id)arg1 toPlaylist:(id)arg2 inLibrary:(id)arg3 progressReporter:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)cacheSongAudioForAdamIDs:(id)arg1 progressReporter:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)removeAllSongsCachedForPhotosWithProgressReporter:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeSongsCachedForPhotosWithAdamIDs:(id)arg1 progressReporter:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)songPropertiesByAdamIDCachedForPhotosWithError:(id*)arg1;

@end
