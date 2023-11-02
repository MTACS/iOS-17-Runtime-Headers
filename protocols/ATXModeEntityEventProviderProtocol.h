
@protocol ATXModeEntityEventProviderProtocol <NSObject>

@required

- (NSArray *)aggregationEventsFromEvent:(id)arg1;
- (BPSPublisher *)biomePublisherWithBookmark:(id <BMBookmark>)arg1;
- (NSDateInterval *)dateIntervalFromEvent:(id)arg1;
- (NSArray *)eventsFromPublisher;
- (bool)isEventFromProvider:(id)arg1;
- (bool)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(NSMutableDictionary *)arg1 aggregationEvent:(ATXModeEvent *)arg2 isLocalToMode:(bool)arg3;

@end
