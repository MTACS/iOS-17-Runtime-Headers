
@interface ICPaperCommonUtilities : NSObject

+ (id)activitiesToExcludeForNote:(id)arg1 currentUserActivity:(id)arg2;
+ (bool)shouldResumeLastQuickNote;
+ (bool)shouldShowLinksWhenComposingQuickNote;

- (id)init;

@end
