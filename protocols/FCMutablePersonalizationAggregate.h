
@protocol FCMutablePersonalizationAggregate <FCPersonalizationAggregate>

@required

- (double)clicks;
- (unsigned long long)eventCount;
- (double)impressions;
- (void)setClicks:(double)arg1;
- (void)setEventCount:(unsigned long long)arg1;
- (void)setImpressions:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
