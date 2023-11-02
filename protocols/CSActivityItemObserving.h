
@protocol CSActivityItemObserving <NSObject>

@required

- (void)activityItemsMayHaveChanged;
- (void)didAddNewActivityItemSceneHostEnvironment;

@end
