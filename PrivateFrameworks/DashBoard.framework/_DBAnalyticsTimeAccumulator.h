
@interface _DBAnalyticsTimeAccumulator : NSObject {
    NSMutableDictionary * _accumulatedTimeStorage;
    NSMutableDictionary * _dateStorage;
}

@property (nonatomic, retain) NSMutableDictionary *accumulatedTimeStorage;
@property (nonatomic, retain) NSMutableDictionary *dateStorage;

- (void).cxx_destruct;
- (double)accumulatedTimeForKey:(id)arg1;
- (id)accumulatedTimeStorage;
- (id)dateStorage;
- (id)init;
- (bool)isAccumulatingTimeForAnyKey;
- (bool)isAccumulatingTimeForKey:(id)arg1;
- (void)setAccumulatedTimeStorage:(id)arg1;
- (void)setDateStorage:(id)arg1;
- (void)startCountingTimeForKey:(id)arg1;
- (void)stopCountingTimeForAllKeys;
- (void)stopCountingTimeForKey:(id)arg1;

@end
