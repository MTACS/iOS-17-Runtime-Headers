
@interface WFPodcastUtilities : NSObject

+ (void*)createLocalPlayerPath;
+ (struct _MRSystemAppPlaybackQueue { }*)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(bool)arg2;
+ (void*)createPlayerPathForOrigin:(void*)arg1;
+ (void)createPreferredPlayerPathWithCompletion:(id /* block */)arg1;
+ (id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2;
+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(bool)arg1 withCompletion:(id /* block */)arg2;

@end
