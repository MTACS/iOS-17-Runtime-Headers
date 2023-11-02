
@interface PodcastsFoundation.ServerPodcastStation : NSObject <PodcastsFoundation.MediaObject> {
    void attributes;
    void episodes;
    void id;
    void type;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)id;
- (id)type;

@end
