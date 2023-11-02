
@protocol PLPersistentHistoryMarkerOverrides <NSObject>

@required

- (NSPersistentHistoryChangeRequest *)overrride_changeRequestForFetching;
- (NSString *)overrride_shortDescription;

@end
