
@interface WLKBasicContentMetadata : NSObject {
    bool  _appleOriginal;
    WLKVideo * _backgroundVideo;
    NSString * _canonicalID;
    NSArray * _categories;
    NSNumber * _commonSenseRecommendedAge;
    WLKContentRating * _contentRating;
    unsigned long long  _contentType;
    NSString * _contentTypeString;
    NSString * _descriptiveText;
    NSArray * _genres;
    WLKArtworkVariantListing * _images;
    bool  _isEvod;
    NSDictionary * _rolesSummary;
    NSString * _shortTitle;
    NSString * _title;
    NSArray * _trailers;
    NSURL * _tvAppDeeplinkURL;
}

@property (getter=isAppleOriginal, nonatomic, readonly) bool appleOriginal;
@property (nonatomic, readonly) WLKVideo *backgroundVideo;
@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) NSArray *categories;
@property (nonatomic, readonly) NSNumber *commonSenseRecommendedAge;
@property (nonatomic, readonly) WLKContentRating *contentRating;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSString *descriptiveText;
@property (nonatomic, readonly, copy) NSArray *genres;
@property (nonatomic, readonly) WLKArtworkVariantListing *images;
@property (nonatomic, readonly) bool isEvod;
@property (nonatomic, readonly, copy) NSDictionary *rolesSummary;
@property (nonatomic, readonly, copy) NSString *shortTitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSArray *trailers;
@property (nonatomic, readonly, copy) NSURL *tvAppDeeplinkURL;

+ (Class)_classForContentType:(unsigned long long)arg1;
+ (unsigned long long)contentTypeForString:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundVideo;
- (id)canonicalID;
- (id)categories;
- (id)commonSenseRecommendedAge;
- (id)contentRating;
- (unsigned long long)contentType;
- (id)description;
- (id)descriptiveText;
- (id)genres;
- (id)images;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isAppleOriginal;
- (bool)isEvod;
- (id)rolesSummary;
- (id)shortTitle;
- (id)title;
- (id)trailers;
- (id)tvAppDeeplinkURL;

@end
