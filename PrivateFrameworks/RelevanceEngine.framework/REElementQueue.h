
@interface REElementQueue : NSObject {
    NSMutableSet * _hiddenElements;
    long long  _maximumRelevantElementsCount;
    REOrderingArray * _relevantElements;
}

@property (nonatomic, readonly) NSArray *allElements;
@property (nonatomic, readonly) long long count;
@property (nonatomic) long long maximumRelevantElementsCount;
@property (nonatomic, readonly) long long visibleCount;

- (void).cxx_destruct;
- (void)addElement:(id)arg1 hidden:(bool)arg2;
- (id)allElements;
- (bool)containsElement:(id)arg1;
- (long long)count;
- (id)elementAtIndex:(unsigned long long)arg1;
- (long long)indexOfElement:(id)arg1;
- (id)initWithMaximumRelevantElementsCount:(long long)arg1 comparators:(id)arg2;
- (long long)maximumRelevantElementsCount;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)removeElement:(id)arg1;
- (void)setMaximumRelevantElementsCount:(long long)arg1;
- (void)updateAllElements;
- (void)updatePositionForElement:(id)arg1 hidden:(bool)arg2;
- (long long)visibleCount;

@end
