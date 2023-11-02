
@interface WBLocalTabAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _ancestorTabUUIDs;
    NSDate * _dateClosed;
    bool  _displayingStandaloneImage;
    bool  _isDisposable;
    bool  _isMuted;
    bool  _isPinned;
    bool  _isSafeToLoadWebPage;
    NSDate * _lastVisitTime;
    bool  _openedFromLink;
    NSString * _pinnedPageTitle;
    NSURL * _pinnedPageURL;
    NSDictionary * _queuedNavigation;
    double  _readerViewTopScrollOffset;
    int  _readingListBookmarkID;
    NSData * _sessionStateData;
    bool  _showingReader;
    unsigned long long  _tabIndex;
    NSString * _windowUUID;
}

@property (nonatomic, readonly, copy) NSArray *ancestorTabUUIDs;
@property (nonatomic, readonly, copy) NSDate *dateClosed;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isDisplayingStandaloneImage, nonatomic, readonly) bool displayingStandaloneImage;
@property (nonatomic, readonly) bool isDisposable;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic, readonly) bool isSafeToLoadWebPage;
@property (nonatomic, readonly, copy) NSDate *lastVisitTime;
@property (getter=wasOpenedFromLink, nonatomic, readonly) bool openedFromLink;
@property (nonatomic, readonly, copy) NSString *pinnedPageTitle;
@property (nonatomic, readonly, copy) NSURL *pinnedPageURL;
@property (nonatomic, readonly, copy) NSDictionary *queuedNavigation;
@property (nonatomic, readonly) double readerViewTopScrollOffset;
@property (nonatomic, readonly) int readingListBookmarkID;
@property (nonatomic, readonly, copy) NSData *sessionStateData;
@property (getter=isShowingReader, nonatomic, readonly) bool showingReader;
@property (nonatomic, readonly) unsigned long long tabIndex;
@property (nonatomic, readonly) NSString *windowUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ancestorTabUUIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateClosed;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLastVisitTime:(id)arg1 sessionStateData:(id)arg2 ancestorTabUUIDs:(id)arg3 displayingStandaloneImage:(bool)arg4 readerViewTopScrollOffset:(double)arg5 readingListBookmarkID:(int)arg6 openedFromLink:(bool)arg7 showingReader:(bool)arg8 queuedNavigation:(id)arg9;
- (id)initWithVersion:(long long)arg1 safeToLoadWebPage:(bool)arg2 lastVisitTime:(id)arg3 sessionStateData:(id)arg4 ancestorTabUUIDs:(id)arg5 dateClosed:(id)arg6 tabIndex:(unsigned long long)arg7 windowUUID:(id)arg8 disposable:(bool)arg9 pinned:(bool)arg10 pinnedPageURL:(id)arg11 pinnedPageTitle:(id)arg12 muted:(bool)arg13 queuedNavigation:(id)arg14 displayingStandaloneImage:(bool)arg15 readerViewTopScrollOffset:(double)arg16 readingListBookmarkID:(int)arg17 openedFromLink:(bool)arg18 showingReader:(bool)arg19;
- (bool)isDisplayingStandaloneImage;
- (bool)isDisposable;
- (bool)isMuted;
- (bool)isPinned;
- (bool)isSafeToLoadWebPage;
- (bool)isShowingReader;
- (id)lastVisitTime;
- (id)localAttributesWithLastVisitTime:(id)arg1;
- (id)pinnedPageTitle;
- (id)pinnedPageURL;
- (id)queuedNavigation;
- (double)readerViewTopScrollOffset;
- (int)readingListBookmarkID;
- (id)sessionStateData;
- (unsigned long long)tabIndex;
- (bool)wasOpenedFromLink;
- (id)windowUUID;

@end
