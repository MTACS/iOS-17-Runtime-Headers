
@protocol EKCalendarSubscriptionSpamCheckEditItemDelegate <NSObject>

@required

- (void)calendarSubscriptionSpamCheckEditItem:(EKCalendarSubscriptionSpamCheckEditItem *)arg1 didDetermineThatURL:(NSURL *)arg2 isSpam:(bool)arg3;

@end
