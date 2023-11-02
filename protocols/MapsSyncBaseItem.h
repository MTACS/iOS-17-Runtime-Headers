
@protocol MapsSyncBaseItem <NSObject>

@required

- (NSDate *)createTime;
- (NSUUID *)identifier;

@end
