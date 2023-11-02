
@interface ATXFakeModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    NSArray * _modeEvents;
    bool  _wasInitializedWithoutEntity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregationEventsFromEvent:(id)arg1;
- (id)biomePublisherWithBookmark:(id)arg1;
- (id)dateIntervalFromEvent:(id)arg1;
- (id)description;
- (id)eventsFromPublisher;
- (id)initWithEventDateIntervals:(id)arg1;
- (id)initWithModeEvents:(id)arg1 expectsNilEntity:(bool)arg2;
- (bool)isEventFromProvider:(id)arg1;
- (bool)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)arg1 aggregationEvent:(id)arg2 isLocalToMode:(bool)arg3;

@end
