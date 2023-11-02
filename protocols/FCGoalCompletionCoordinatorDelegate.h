
@protocol FCGoalCompletionCoordinatorDelegate <NSObject>

@required

- (void)coordinator:(FCGoalCompletionCoordinator *)arg1 postGoalCompletionNotification:(FCCGoalCompletionContent *)arg2;

@end
