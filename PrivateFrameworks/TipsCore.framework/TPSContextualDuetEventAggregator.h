
@interface TPSContextualDuetEventAggregator : NSObject {
    NSMutableDictionary * _keyPathObservationMap;
    NSMutableDictionary * _matchedEventMap;
}

@property (nonatomic, readonly, copy) TPSContextualDuetEventBookmark *bookmark;
@property (nonatomic, retain) NSMutableDictionary *keyPathObservationMap;
@property (nonatomic, retain) NSMutableDictionary *matchedEventMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_removeOutdatedObservations:(double)arg1;
- (void)_updateLastMatchedEvent:(id)arg1 forKey:(id)arg2;
- (void)addObservationResult:(id)arg1 forKey:(id)arg2;
- (id)bookmark;
- (id)debugDescription;
- (void)evaluateResultsWithMinObservationCount:(unsigned long long)arg1 maxTimeInterval:(double)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithBookmark:(id)arg1;
- (id)keyPathObservationMap;
- (id)lastEventForKey:(id)arg1;
- (id)matchedEventMap;
- (id)observationMapForKey:(id)arg1;
- (void)setKeyPathObservationMap:(id)arg1;
- (void)setMatchedEventMap:(id)arg1;

@end
