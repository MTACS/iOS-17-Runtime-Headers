
@interface SSPodcastResultBuilder : SSResultBuilder {
    NSArray * _authors;
    NSURL * _imageURL;
    NSDate * _lastViewedDate;
    NSString * _name;
    NSString * _podcastDescription;
}

@property (nonatomic, retain) NSArray *authors;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, retain) NSDate *lastViewedDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *podcastDescription;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)authors;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildLastViewedString;
- (id)imageURL;
- (id)initWithResult:(id)arg1;
- (id)lastViewedDate;
- (id)name;
- (id)podcastDescription;
- (void)setAuthors:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPodcastDescription:(id)arg1;

@end
