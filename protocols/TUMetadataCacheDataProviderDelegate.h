
@protocol TUMetadataCacheDataProviderDelegate <NSObject>

@optional

- (void)dataProvider:(TUMetadataCacheDataProvider *)arg1 requestedRefreshWithDestinationIDs:(NSSet *)arg2;

@end
