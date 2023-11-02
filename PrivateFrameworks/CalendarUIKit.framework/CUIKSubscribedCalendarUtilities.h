
@interface CUIKSubscribedCalendarUtilities : NSObject

+ (bool)canHandleURL:(id)arg1;
+ (id)checkSubscriptionURL:(id)arg1 missingSchemeBlock:(id /* block */)arg2 unsupportedSchemeBlock:(id /* block */)arg3;
+ (void)checkURLForSpam:(id)arg1 completionHandler:(id /* block */)arg2 queue:(id)arg3;
+ (void)fetchAvailableHolidayCalendarsWithCompletion:(id /* block */)arg1 queue:(id)arg2;
+ (void)reportLocalSubscribedCalendarAsJunkWithoutRemoval:(id)arg1;
+ (id)subscriptionURL:(id)arg1 usingHTTPS:(bool)arg2;
+ (id)subscriptionURLForCalendar:(id)arg1 inStore:(id)arg2;
+ (void)unsubscribeFromCalendar:(id)arg1;
+ (void)unsubscribeFromCalendar:(id)arg1 reportAsJunk:(bool)arg2;

@end
