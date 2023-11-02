
@protocol SHSheetActivityItemsManagerCollaborationDelegate <NSObject>

@required

- (NSArray *)activityItemsManager:(SHSheetActivityItemsManager *)arg1 collaborationActivityItemValuesForActivityItemValue:(NSArray *)arg2 activity:(UIActivity *)arg3;
- (bool)activityItemsManager:(SHSheetActivityItemsManager *)arg1 collaborationSupportsPromiseURLsForActivity:(UIActivity *)arg2;
- (NSString *)activityItemsManager:(SHSheetActivityItemsManager *)arg1 subjectForActivity:(UIActivity *)arg2;
- (bool)activityItemsManagerIsCollaborative:(SHSheetActivityItemsManager *)arg1;
- (NSArray *)collaborationPlaceholderActivityItemsForActivityItemsManager:(SHSheetActivityItemsManager *)arg1;

@end
