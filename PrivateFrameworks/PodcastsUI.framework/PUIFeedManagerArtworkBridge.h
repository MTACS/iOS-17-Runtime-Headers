
@interface PUIFeedManagerArtworkBridge : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  caches;
    void fileManager;
    void imageDownloader;
    void imageProvider;
    void imageStore;
}

+ (void)setShared:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (bool)artworkShouldBeFetchedForPodcastUUID:(id)arg1;
- (id)init;
- (void)updateArtworkForShow:(id)arg1 useBackgroundFetch:(bool)arg2 fetchUberImage:(bool)arg3;

@end
