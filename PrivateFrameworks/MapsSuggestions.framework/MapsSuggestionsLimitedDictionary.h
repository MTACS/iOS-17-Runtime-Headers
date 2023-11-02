
@interface MapsSuggestionsLimitedDictionary : NSObject <MapsSuggestionsTriggerObserver> {
    NSMutableDictionary * _dict;
    NSMutableDictionary * _hits;
    unsigned long long  _maxCapacity;
    NSMutableArray * _order;
    unsigned long long  _totalHits;
    unsigned long long  _totalMisses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)hitsOnKey:(id)arg1;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (double)totalHitRatio;
- (void)triggerFired:(id)arg1;
- (id)uniqueName;

@end
