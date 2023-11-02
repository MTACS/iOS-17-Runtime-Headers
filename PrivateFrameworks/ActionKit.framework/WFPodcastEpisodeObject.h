
@interface WFPodcastEpisodeObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {
    NSString * _artworkURLTemplate;
    NSString * _author;
    NSString * _descriptionText;
    WFTimeInterval * _duration;
    NSNumber * _episodeNumber;
    NSURL * _feedURL;
    NSArray * _genres;
    NSString * _identifier;
    NSDate * _releaseDate;
    NSString * _title;
    NSURL * _viewURL;
}

@property (nonatomic, readonly) NSString *artworkURLTemplate;
@property (nonatomic, readonly) NSString *author;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) WFTimeInterval *duration;
@property (nonatomic, readonly) NSNumber *episodeNumber;
@property (nonatomic, readonly) NSURL *feedURL;
@property (nonatomic, readonly) NSArray *genres;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *viewURL;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)descriptionTextJSONTransformer;
+ (id)durationJSONTransformer;
+ (id)releaseDateJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkURLTemplate;
- (id)author;
- (id)descriptionText;
- (id)duration;
- (id)episodeNumber;
- (id)feedURL;
- (id)genres;
- (id)identifier;
- (id)releaseDate;
- (id)title;
- (id)viewURL;
- (id)wfName;

@end
