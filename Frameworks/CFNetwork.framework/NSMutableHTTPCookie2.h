
@interface NSMutableHTTPCookie2 : NSHTTPCookie2

@property (retain) NSString *domain;
@property (retain) NSDate *expirationDate;
@property bool hostOnly;
@property bool httpOnly;
@property (retain) NSString *name;
@property (retain) NSString *partition;
@property (retain) NSString *path;
@property long long sameSite;
@property bool secure;
@property long long source;
@property (retain) NSString *value;

- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHostOnly:(bool)arg1;
- (void)setHttpOnly:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPartition:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSameSite:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setValue:(id)arg1;

@end
