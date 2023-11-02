
@interface CALNEKUIEventRepresentationProvider : NSObject <CALNDataSourceEventRepresentationProvider, CALNSourceEventRepresentationProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)eventRepresentationDictionaryForInvitationNotification:(id)arg1 event:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
- (id)eventRepresentationDictionaryForResourceChangeNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
- (id)eventRepresentationDictionaryForResponseNotificationWithTitle:(id)arg1 message:(id)arg2;
- (id)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(id)arg1 message:(id)arg2;
- (id)eventRepresentationDictionaryForUpcomingEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3;
- (id)updateEventRepresentationDictionary:(id)arg1 withHypothesisMessage:(id)arg2;

@end
