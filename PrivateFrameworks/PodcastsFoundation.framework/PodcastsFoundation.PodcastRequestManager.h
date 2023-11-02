
@interface PodcastsFoundation.PodcastRequestManager : NSObject {
    void mediaRequestController;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)updatePodcastWithEpisodeAdamId:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePodcastWithStoreId:(long long)arg1 completion:(id /* block */)arg2;

@end
