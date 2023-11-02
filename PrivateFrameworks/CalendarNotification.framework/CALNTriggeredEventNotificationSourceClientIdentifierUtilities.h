
@interface CALNTriggeredEventNotificationSourceClientIdentifierUtilities : NSObject

+ (id)_characterSetForEncodingIdentifierComponents;
+ (id)alarmIDForSourceClientIdentifier:(id)arg1;
+ (void)eventID:(id*)arg1 andAlarmID:(id*)arg2 fromSourceClientIdentifier:(id)arg3;
+ (id)eventIDForSourceClientIdentifier:(id)arg1;
+ (id)sourceClientIdentifierForEventID:(id)arg1 alarmID:(id)arg2;

@end
