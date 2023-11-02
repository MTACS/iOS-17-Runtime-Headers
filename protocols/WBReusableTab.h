
@protocol WBReusableTab <NSObject>

@required

- (void)evictFromTabReuse;
- (void)setUuid:(NSUUID *)arg1;
- (NSUUID *)uuid;

@end
