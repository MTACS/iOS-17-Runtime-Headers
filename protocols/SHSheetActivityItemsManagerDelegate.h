
@protocol SHSheetActivityItemsManagerDelegate <NSObject>

@required

- (void)activityItemsManagerLinkMetadataValuesDidChange:(SHSheetActivityItemsManager *)arg1;
- (NSArray *)urlRequestsForActivityItemsManager:(SHSheetActivityItemsManager *)arg1;

@end
