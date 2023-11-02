
@interface CALNNullIconProvider : NSObject <CALNCalendarIconIdentifierProvider, CALNNotificationIconProvider, CalIconProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;
- (id)pngDataForIconWithIdentifier:(id)arg1;

@end
