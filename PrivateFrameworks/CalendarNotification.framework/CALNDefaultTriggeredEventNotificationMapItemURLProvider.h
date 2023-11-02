
@interface CALNDefaultTriggeredEventNotificationMapItemURLProvider : NSObject <CALNTriggeredEventNotificationMapItemURLProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_directionsModeForHypothesis:(id)arg1 routing:(id)arg2;
+ (id)_directionsModeForLocationRoutingMode:(long long)arg1;
+ (id)_directionsModeForRouting:(id)arg1;
+ (id)_directionsModeForTransportType:(int)arg1;
+ (id)_eventLocationFromStructuredLocation:(id)arg1;
+ (id)_mapItemNameFromEventLocation:(id)arg1;
+ (id)_mapItemURLForEventLocation:(id)arg1 eventStartDate:(id)arg2 hypothesis:(id)arg3;
+ (id)_mapItemURLLaunchOptionsForDirectionsMode:(id)arg1 eventDate:(id)arg2 isFromTimeToLeaveNotification:(bool)arg3;
+ (id)_mapItemURLLaunchOptionsForHypothesis:(id)arg1 routing:(id)arg2 eventStartDate:(id)arg3;
+ (id)sharedInstance;

- (id)mapItemURLForOptionalEventLocation:(id)arg1 eventStartDate:(id)arg2 hypothesis:(id)arg3;

@end
