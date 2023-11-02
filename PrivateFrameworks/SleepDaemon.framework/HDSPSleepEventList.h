
@interface HDSPSleepEventList : NSObject <BSDescriptionProviding> {
    NSMutableDictionary * _eventsByProvider;
    NSArray * _sortedEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *eventsByProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sortedEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sortEvents;
- (void)addEvents:(id)arg1 provider:(id)arg2;
- (id)allEvents;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)eventsByProvider;
- (id)init;
- (id)nextEvent;
- (id)overdueEventsForDate:(id)arg1;
- (void)removeAllEvents;
- (void)removeEvents:(id)arg1;
- (void)removeEventsForProvider:(id)arg1;
- (id)sortedEvents;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
