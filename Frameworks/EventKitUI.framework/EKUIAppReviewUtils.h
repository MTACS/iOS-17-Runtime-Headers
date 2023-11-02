
@interface EKUIAppReviewUtils : NSObject

+ (id)_queue;
+ (id)_sharedStoreReview;
+ (bool)_shouldDisplayReviewPromptWithCalendarModel:(id)arg1;
+ (bool)_upcomingEventCountMeetsThresholdInCalendarModel:(id)arg1;
+ (void)applicationDidForeground;
+ (void)displayReviewPromptIfNeededInScene:(id)arg1 calendarModel:(id)arg2;

@end
