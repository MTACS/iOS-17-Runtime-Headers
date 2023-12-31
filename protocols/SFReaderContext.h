
@protocol SFReaderContext <NSObject>

@required

- (void)activateFont:(NSString *)arg1;
- (void)activateReader;
- (bool)canDecreaseReaderTextSize;
- (bool)canIncreaseReaderTextSize;
- (void)checkReaderAvailability;
- (void)clearAvailability;
- (void)clearReaderWebView;
- (void)clearUnusedReaderResourcesSoon;
- (void)collectReaderContentForMailWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (WBSReaderConfigurationManager *)configurationManager;
- (void)createArticleFinder;
- (long long)currentAppearance;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)decreaseReaderTextSize;
- (WBSReaderFontManager *)fontManager;
- (void)increaseReaderTextSize;
- (bool)isLoadingNextPage;
- (bool)isReaderAvailable;
- (void)loadNewArticle;
- (NSURL *)readerURL;
- (void)resetReaderTextSize;
- (NSDictionary *)scrollPositionInformation;
- (void)setReaderFont:(WBSReaderFont *)arg1;
- (void)setReaderLanguageTag:(NSString *)arg1;
- (void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
- (bool)shouldCreateArticleFinder;
- (void)stopLoadingNextPage;

@end
