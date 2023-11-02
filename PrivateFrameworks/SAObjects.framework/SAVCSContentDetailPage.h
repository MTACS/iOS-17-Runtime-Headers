
@interface SAVCSContentDetailPage : SAAceView

@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSString *imagesJsonContentPayload;
@property (nonatomic) bool isEvod;
@property (nonatomic, copy) NSString *loadingText;
@property (nonatomic) long long resultIndex;
@property (nonatomic, copy) NSString *seasonId;
@property (nonatomic, copy) NSString *showId;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) bool userDriven;
@property (nonatomic, copy) NSString *utsId;
@property (nonatomic, copy) NSURL *utsSearchUrl;

+ (id)contentDetailPage;
+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)imagesJsonContentPayload;
- (bool)isEvod;
- (id)loadingText;
- (long long)resultIndex;
- (id)seasonId;
- (void)setContentType:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImagesJsonContentPayload:(id)arg1;
- (void)setIsEvod:(bool)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setResultIndex:(long long)arg1;
- (void)setSeasonId:(id)arg1;
- (void)setShowId:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserDriven:(bool)arg1;
- (void)setUtsId:(id)arg1;
- (void)setUtsSearchUrl:(id)arg1;
- (id)showId;
- (id)url;
- (bool)userDriven;
- (id)utsId;
- (id)utsSearchUrl;

@end
