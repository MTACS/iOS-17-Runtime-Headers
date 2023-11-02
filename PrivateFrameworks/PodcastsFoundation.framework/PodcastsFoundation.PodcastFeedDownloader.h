
@interface PodcastsFoundation.PodcastFeedDownloader : NSObject {
    void mediaRequestController;
}

- (void).cxx_destruct;
- (void)downloadPodcast:(id)arg1 triggerBy:(id)arg2 allowEpisodesTo404:(bool)arg3 isImplicitActionRequest:(bool)arg4 completion:(id /* block */)arg5;
- (id)init;

@end
