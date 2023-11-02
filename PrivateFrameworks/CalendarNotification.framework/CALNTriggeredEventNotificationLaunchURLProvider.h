
@interface CALNTriggeredEventNotificationLaunchURLProvider : NSObject

+ (id)_launchURLForEventID:(id)arg1 hypothesis:(id)arg2 isTravelLaunchURL:(bool*)arg3;
+ (id)_travelLaunchURLForEventID:(id)arg1 hypothesis:(id)arg2;
+ (id)launchURLForOptionalEventID:(id)arg1 hypothesis:(id)arg2 isTravelLaunchURL:(bool*)arg3;
+ (id)launchURLForOptionalEventOccurrenceID:(id)arg1;

@end
