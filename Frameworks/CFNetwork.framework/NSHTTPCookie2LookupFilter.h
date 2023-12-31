
@interface NSHTTPCookie2LookupFilter : NSObject {
    unsigned long long  _acceptPolicy;
    NSString * _domain;
    bool  _httpOnly;
    bool  _ignoreHTTPOnlyCookie;
    bool  _ignoreHostOnlyFlag;
    bool  _ignoreSecureFlag;
    NSURL * _inURL;
    bool  _isSafe;
    bool  _isTopLevelNavigation;
    NSURL * _mainDocumentURL;
    NSString * _name;
    NSDate * _newerThanCreationDate;
    NSDate * _newerThanExpirationDate;
    NSDate * _newerThanLastAccess;
    NSDate * _olderThanCreationDate;
    NSDate * _olderThanExpirationDate;
    NSDate * _olderThanLastAccess;
    NSString * _partition;
    NSString * _path;
    long long  _sameSite;
    bool  _secure;
    NSURL * _siteForCookies;
    NSString * _value;
}

@property unsigned long long acceptPolicy;
@property (nonatomic, copy) NSString *domain;
@property bool httpOnly;
@property bool ignoreHTTPOnlyCookie;
@property bool ignoreHostOnlyFlag;
@property bool ignoreSecureFlag;
@property (nonatomic, copy) NSURL *inURL;
@property bool isSafe;
@property bool isTopLevelNavigation;
@property (nonatomic, copy) NSURL *mainDocumentURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDate *newerThanCreationDate;
@property (nonatomic, copy) NSDate *newerThanExpirationDate;
@property (nonatomic, copy) NSDate *newerThanLastAccess;
@property (nonatomic, copy) NSDate *olderThanCreationDate;
@property (nonatomic, copy) NSDate *olderThanExpirationDate;
@property (nonatomic, copy) NSDate *olderThanLastAccess;
@property (nonatomic, copy) NSString *partition;
@property (nonatomic, copy) NSString *path;
@property long long sameSite;
@property bool secure;
@property (nonatomic, copy) NSURL *siteForCookies;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (long long)_flags;
- (unsigned long long)acceptPolicy;
- (id)domain;
- (bool)httpOnly;
- (bool)ignoreHTTPOnlyCookie;
- (bool)ignoreHostOnlyFlag;
- (bool)ignoreSecureFlag;
- (id)inURL;
- (id)initWithCookie:(id)arg1;
- (bool)isSafe;
- (bool)isTopLevelNavigation;
- (id)mainDocumentURL;
- (bool)matchCookie:(id)arg1;
- (id)name;
- (id)newerThanCreationDate;
- (id)newerThanExpirationDate;
- (id)newerThanLastAccess;
- (id)olderThanCreationDate;
- (id)olderThanExpirationDate;
- (id)olderThanLastAccess;
- (id)partition;
- (id)path;
- (long long)sameSite;
- (bool)secure;
- (void)setAcceptPolicy:(unsigned long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setHttpOnly:(bool)arg1;
- (void)setIgnoreHTTPOnlyCookie:(bool)arg1;
- (void)setIgnoreHostOnlyFlag:(bool)arg1;
- (void)setIgnoreSecureFlag:(bool)arg1;
- (void)setInURL:(id)arg1;
- (void)setIsSafe:(bool)arg1;
- (void)setIsTopLevelNavigation:(bool)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNewerThanCreationDate:(id)arg1;
- (void)setNewerThanExpirationDate:(id)arg1;
- (void)setNewerThanLastAccess:(id)arg1;
- (void)setOlderThanCreationDate:(id)arg1;
- (void)setOlderThanExpirationDate:(id)arg1;
- (void)setOlderThanLastAccess:(id)arg1;
- (void)setPartition:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSameSite:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSiteForCookies:(id)arg1;
- (void)setValue:(id)arg1;
- (id)siteForCookies;
- (id)value;

@end
