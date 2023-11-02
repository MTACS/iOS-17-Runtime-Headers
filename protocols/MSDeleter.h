
@protocol MSDeleter <NSObject>

@required

- (void)abort;
- (<MSDeleterDelegate> *)delegate;
- (void)deleteAssetCollections:(NSArray *)arg1;
- (void)performOutstandingActivities;
- (void)setDelegate:(id <MSDeleterDelegate>)arg1;
- (void)stop;

@end
