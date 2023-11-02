
@protocol MapsSync.MapsSyncStoreControllerDelegate

@required

- (void)storeControllerWithDidLoad:(_TtC8MapsSync13MapsSyncStore *)arg1;

@optional

- (void)storeControllerWithDataChanged:(NSError *)arg1;
- (void)storeControllerWithDataTypesChanged:(NSArray *)arg1;
- (void)storeControllerWithFailedToLoad:(NSError *)arg1;

@end
