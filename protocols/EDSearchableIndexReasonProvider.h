
@protocol EDSearchableIndexReasonProvider <NSObject>

@required

- (NSSet *)currentReasons;
- (NSSet *)dataSourceRefreshReasons;
- (NSSet *)exclusionReasons;
- (NSSet *)purgeReasons;

@end
