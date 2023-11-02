
@interface CALNDefaultEKCalendarNotificationReferenceProvider : NSObject <CALNEKCalendarNotificationReferenceProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 date:(id)arg3 inEventStore:(id)arg4;
- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 inEventStore:(id)arg3;

@end
