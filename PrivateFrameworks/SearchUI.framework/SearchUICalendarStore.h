
@interface SearchUICalendarStore : NSObject

+ (id)colorForDefaultCalendarForNewEvents;
+ (id)eventControllerWithIdentifier:(id)arg1;
+ (void)fetchCalendarItemFromEventIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedCalendarStore;

@end
