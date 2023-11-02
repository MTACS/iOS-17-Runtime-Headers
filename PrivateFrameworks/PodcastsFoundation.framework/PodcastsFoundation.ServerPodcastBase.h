
@interface PodcastsFoundation.ServerPodcastBase : NSObject {
    void attributes;
    void id;
    void relationships;
    void type;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)id;
- (id)type;

@end
