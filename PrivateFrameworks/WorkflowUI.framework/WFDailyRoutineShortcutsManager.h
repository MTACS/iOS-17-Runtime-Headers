
@interface WFDailyRoutineShortcutsManager : NSObject

+ (id)atTheGymShortcut;
+ (void)getDailyRoutineShortcutsWithCompletionHandler:(id /* block */)arg1;
+ (id)goingToWorkShortcut;
+ (id)headingHomeShortcut;
+ (id /* block */)processActionResponseBlockWithCompletion:(id /* block */)arg1;

@end
