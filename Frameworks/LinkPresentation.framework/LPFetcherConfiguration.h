
@interface LPFetcherConfiguration : NSObject <NSCopying> {
    bool  _loadingIsNonAppInitiated;
    long long  _maximumResponseCount;
    LPEvent * _rootEvent;
    WKWebView * _webViewForProcessSharing;
}

@property (nonatomic) bool loadingIsNonAppInitiated;
@property (nonatomic) long long maximumResponseCount;
@property (nonatomic, retain) LPEvent *rootEvent;
@property (nonatomic, retain) WKWebView *webViewForProcessSharing;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)loadingIsNonAppInitiated;
- (long long)maximumResponseCount;
- (id)rootEvent;
- (void)setLoadingIsNonAppInitiated:(bool)arg1;
- (void)setMaximumResponseCount:(long long)arg1;
- (void)setRootEvent:(id)arg1;
- (void)setWebViewForProcessSharing:(id)arg1;
- (id)webViewForProcessSharing;

@end
