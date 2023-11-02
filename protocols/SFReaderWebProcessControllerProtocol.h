
@protocol SFReaderWebProcessControllerProtocol <NSObject>

@required

- (void)activateFont:(NSString *)arg1;
- (void)checkReaderAvailability;
- (void)collectArticleContent;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(NSNumber *)arg1;
- (void)didCreateReaderPageContextHandle:(WKBrowsingContextHandle *)arg1;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)loadNewReaderArticle;
- (void)prepareReaderContentForPrinting;
- (void)prepareToTransitionToReader;
- (void)setArticleLocale:(NSString *)arg1;
- (void)setConfiguration:(NSDictionary *)arg1;
- (void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(NSDictionary *)arg2 isViewingArchive:(bool)arg3;
- (void)setReaderIsActive:(bool)arg1;

@end
