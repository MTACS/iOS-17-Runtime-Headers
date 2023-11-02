
@interface MKPriorityToIndexMap : NSObject {
    NSMutableArray * _priorities;
    NSMutableDictionary * _prioritiesToIndexes;
}

- (void).cxx_destruct;
- (bool)addPriorities:(id)arg1;
- (void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;
- (bool)contains:(id)arg1;
- (bool)containsPriority:(double)arg1;
- (long long)indexOfPriority:(double)arg1;
- (id)init;
- (id)initWithPriorities:(id)arg1;
- (void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;
- (id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (double)priorityOfIndex:(unsigned long long)arg1;

@end
