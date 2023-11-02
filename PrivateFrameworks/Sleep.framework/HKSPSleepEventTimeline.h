
@interface HKSPSleepEventTimeline : NSObject <NSCopying> {
    NSMutableArray * _orderedOccurrences;
    NSDate * _originDate;
    NSMutableArray * _timelineAdjustments;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) NSMutableArray *orderedOccurrences;
@property (nonatomic, readonly) NSDate *originDate;
@property (nonatomic, readonly) NSArray *previousEvents;
@property (nonatomic, readonly) NSArray *previousResolvedOccurrences;
@property (nonatomic, readonly) NSArray *resolvedOccurrences;
@property (nonatomic, readonly) NSMutableArray *timelineAdjustments;
@property (nonatomic, readonly) NSArray *upcomingEvents;
@property (nonatomic, readonly) NSArray *upcomingResolvedOccurrences;

- (void).cxx_destruct;
- (void)_adjustedResolvedOccurrence:(id)arg1 adjustmentBlock:(id /* block */)arg2;
- (void)addResolvedOccurrence:(id)arg1;
- (void)adjustResolvedOccurrence:(id)arg1 removingEventWithIdentifier:(id)arg2;
- (void)adjustResolvedOccurrence:(id)arg1 withEvent:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)events;
- (id)initWithOriginDate:(id)arg1;
- (id)orderedOccurrences;
- (id)originDate;
- (id)previousEvents;
- (id)previousResolvedOccurrences;
- (id)resolvedOccurrenceContainingDate:(id)arg1;
- (id)resolvedOccurrenceContainingOrPrecedingDate:(id)arg1;
- (id)resolvedOccurrenceOverlappingOccurrence:(id)arg1;
- (id)resolvedOccurrencePrecedingDate:(id)arg1;
- (id)resolvedOccurrences;
- (id)timelineAdjustments;
- (id)upcomingEvents;
- (id)upcomingResolvedOccurrences;
- (id)upcomingResolvedOccurrencesBeforeDate:(id)arg1;

@end
