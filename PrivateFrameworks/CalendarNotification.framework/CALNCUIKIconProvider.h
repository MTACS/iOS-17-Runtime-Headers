
@interface CALNCUIKIconProvider : NSObject <CALNCalendarIconIdentifierProvider, CALNNotificationIconProvider, CalIconProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_identifierEncodingAllowedCharacters;
+ (bool)_parseIconIdentifier:(id)arg1 intoDateComponents:(id*)arg2 calendar:(id*)arg3 type:(long long*)arg4;
+ (id)sharedInstance;

- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;
- (id)pngDataForIconWithIdentifier:(id)arg1;

@end
