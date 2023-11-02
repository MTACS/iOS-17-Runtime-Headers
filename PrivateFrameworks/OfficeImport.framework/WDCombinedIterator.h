
@interface WDCombinedIterator : WDIterator {
    WDIterator * mChildIterator;
    WDIterator * mParentIterator;
}

@property (nonatomic, retain) WDIterator *childIterator;

- (void).cxx_destruct;
- (id)childIterator;
- (id)childIteratorFrom:(id)arg1;
- (bool)hasNext;
- (void)incrementChildIterator;
- (id)initWithParentIterator:(id)arg1;
- (id)newChildIteratorFrom:(id)arg1;
- (id)next;
- (void)setChildIterator:(id)arg1;

@end
