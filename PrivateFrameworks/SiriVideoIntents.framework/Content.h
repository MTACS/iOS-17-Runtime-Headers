
@interface Content : INObject

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSNumber *appDisambiguation;
@property (nonatomic, copy) NSURL *detailsUrl;
@property (nonatomic, copy) NSString *episodeNumber;
@property (nonatomic, copy) NSDate *finaleDate;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) NSNumber *hasMoreResults;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, retain) NSNumber *isInWatchList;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSURL *punchoutUrl;
@property (nonatomic, copy) NSString *ratingSystem;
@property (nonatomic, copy) NSString *ratingValue;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) ResultEntity *resultEntity;
@property (nonatomic, retain) NSNumber *runtimeInMinutes;
@property (nonatomic, retain) Content *season;
@property (nonatomic, retain) NSNumber *seasonCount;
@property (nonatomic, copy) NSString *seasonNumber;
@property (nonatomic, retain) Content *show;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *umcId;
@property (nonatomic, copy) NSString *utsSearchUrl;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
