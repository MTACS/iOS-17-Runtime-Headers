
@interface PPEventsAggregator : NSObject {
    NSArray * _eventsPool;
}

@property (nonatomic, retain) NSArray *eventsPool;

- (void).cxx_destruct;
- (void)dedupeEventsInPool;
- (id)eventsPool;
- (id)initWithEventsPool:(id)arg1;
- (bool)isEvent:(id)arg1 dupeOfEvent:(id)arg2;
- (void)setEventsPool:(id)arg1;
- (id)tripCandidatesFromEventsPool;

@end
