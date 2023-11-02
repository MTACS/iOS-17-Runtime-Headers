
@interface PKPlayerManifest : NSObject {
    void assetInfo;
    void playableContent;
    void siriContext;
}

+ (id)manifestForEpisode:(id)arg1;
+ (id)manifestForEpisodeStoreId:(id)arg1 assetInfo:(id)arg2;
+ (id)manifestForEpisodeStoreId:(id)arg1 siriContext:(id)arg2;
+ (id)manifestForPlayMyPodcastsWithSiriContext:(id)arg1;
+ (id)manifestForShow:(id)arg1;
+ (id)manifestForShowStoreId:(id)arg1 assetInfo:(id)arg2;
+ (id)manifestForShowStoreId:(id)arg1 siriContext:(id)arg2;
+ (id)manifestForShowUuid:(id)arg1 siriContext:(id)arg2;
+ (id)manifestForStationId:(id)arg1 siriContext:(id)arg2;

- (void).cxx_destruct;
- (id)init;

@end
