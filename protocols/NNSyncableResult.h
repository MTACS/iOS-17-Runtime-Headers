
@protocol NNSyncableResult <NSObject>

@required

- (NSDate *)sync_expirationDate;
- (unsigned long long)sync_headlineCount;
- (NSArray *)sync_sections;

@end
