
@protocol PGGraphEvent <NSObject>

@required

- (NSString *)UUID;
- (<PGGraphBusinessedEvent> *)businessedEvent;
- (double)contentScore;
- (NSDictionary *)debugDictionary;
- (bool)endsBeforeLocalDate:(NSDate *)arg1;
- (<PGEventEnrichment> *)enrichableEvent;
- (<PGGraphEventCollection> *)eventCollection;
- (NSArray *)eventSortedMomentNodes;
- (PGGraphHighlightGroupNode *)highlightGroupNode;
- (bool)isInteresting;
- (bool)isInterestingWithAlternateJunking;
- (bool)isLongTrip;
- (bool)isShortTrip;
- (bool)isSmartInteresting;
- (bool)isTrip;
- (NSDate *)localEndDate;
- (NSDate *)localStartDate;
- (<PGGraphLocatedEvent> *)locatedEvent;
- (<PGGraphMeaningfulEvent> *)meaningfulEvent;
- (NSString *)name;
- (NSSet *)naturalLanguageFeatures;
- (<PGGraphPeopledEvent> *)peopledEvent;
- (bool)petIsPresent;
- (PGGraphNode<PGGraphRelatableEvent> *)relatableEvent;
- (<PGGraphScenedEvent> *)scenedEvent;
- (bool)startsAfterLocalDate:(NSDate *)arg1;
- (<PGGraphTimedEvent> *)timedEvent;
- (double)timestampUTCEnd;
- (double)timestampUTCStart;
- (NSDate *)universalEndDate;
- (NSDate *)universalStartDate;

@end
