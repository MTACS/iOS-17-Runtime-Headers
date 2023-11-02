
@protocol TBTile <NSObject>

@required

- (unsigned long long)key;

@optional

- (NSDate *)created;
- (NSString *)etag;
- (unsigned long long)networkCount;
- (void)setEtag:(NSString *)arg1;

@end
