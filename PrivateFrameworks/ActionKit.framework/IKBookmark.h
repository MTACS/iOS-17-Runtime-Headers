
@interface IKBookmark : NSObject {
    NSURL * _URL;
    long long  _bookmarkID;
    NSDate * _date;
    NSString * _descr;
    NSString * _hashString;
    NSString * _privateSource;
    double  _progress;
    NSDate * _progressDate;
    bool  _starred;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) long long bookmarkID;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *descr;
@property (nonatomic, copy) NSString *hashString;
@property (nonatomic, copy) NSString *privateSource;
@property (nonatomic) double progress;
@property (nonatomic, retain) NSDate *progressDate;
@property (getter=isStarred, nonatomic) bool starred;
@property (nonatomic, copy) NSString *title;

+ (id)bookmarkWithBookmarkID:(long long)arg1;

- (id)URL;
- (long long)bookmarkID;
- (id)date;
- (void)dealloc;
- (id)descr;
- (id)description;
- (id)hashString;
- (id)init;
- (id)initWithBookmarkID:(long long)arg1;
- (bool)isStarred;
- (id)privateSource;
- (double)progress;
- (id)progressDate;
- (void)setBookmarkID:(long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDescr:(id)arg1;
- (void)setHashString:(id)arg1;
- (void)setPrivateSource:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressDate:(id)arg1;
- (void)setStarred:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
