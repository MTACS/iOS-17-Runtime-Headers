
@interface MTRecommendationModule : NSObject <PodcastsFoundation.MediaObject> {
    void attributes;
    void episodes;
    void id;
    void shows;
    void type;
}

@property (nonatomic, readonly) MTRecommendationModuleAttributes *attributes;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)attributes;
- (id)id;
- (void)setId:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
