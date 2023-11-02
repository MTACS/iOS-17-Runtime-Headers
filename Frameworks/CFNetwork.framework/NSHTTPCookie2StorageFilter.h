
@interface NSHTTPCookie2StorageFilter : NSObject {
    unsigned long long  _acceptPolicy;
    bool  _isSafe;
    bool  _isTopLevelNavigation;
    bool  _isTrusted;
    bool  _isTrustedCached;
    NSURL * _mainDocumentURL;
    bool  _overwriteHTTPOnlyCookies;
    NSString * _partition;
    NSURL * _siteForCookies;
    NSURL * _url;
    NSString * _urlScheme;
}

@property unsigned long long acceptPolicy;
@property bool isSafe;
@property bool isTopLevelNavigation;
@property (nonatomic, retain) NSURL *mainDocumentURL;
@property bool overwriteHTTPOnlyCookies;
@property (nonatomic, retain) NSString *partition;
@property (nonatomic, retain) NSURL *siteForCookies;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (unsigned long long)acceptPolicy;
- (id)init;
- (bool)isSafe;
- (bool)isTopLevelNavigation;
- (bool)isTrusted;
- (id)mainDocumentURL;
- (bool)overwriteHTTPOnlyCookies;
- (id)partition;
- (void)setAcceptPolicy:(unsigned long long)arg1;
- (void)setIsSafe:(bool)arg1;
- (void)setIsTopLevelNavigation:(bool)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setOverwriteHTTPOnlyCookies:(bool)arg1;
- (void)setPartition:(id)arg1;
- (void)setSiteForCookies:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)siteForCookies;
- (id)url;

@end
