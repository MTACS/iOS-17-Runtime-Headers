
@interface ATXInteractionEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    <ATXStableContactRepresentationProviderProtocol> * _stableContactRepresentationProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregationEventsFromEvent:(id)arg1;
- (id)biomePublisherWithBookmark:(id)arg1;
- (id)contactEntityFromEvent:(id)arg1;
- (id)contactEntityFromInstantMessagingInteraction:(id)arg1;
- (id)dateIntervalFromEvent:(id)arg1;
- (id)description;
- (id)eventsFromPublisher;
- (id)init;
- (bool)isEventFromProvider:(id)arg1;
- (bool)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)arg1 aggregationEvent:(id)arg2 isLocalToMode:(bool)arg3;

@end
