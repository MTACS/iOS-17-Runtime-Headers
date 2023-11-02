
@interface _PSCNAutocompleteFeedbackInteractionIterator : NSEnumerator {
    unsigned long long  _batchSize;
    NSSet * _bundleIds;
    NSDate * _endDate;
    _CDInteractionStore * _interactionStore;
    bool  _isExhausted;
    _CDInteraction * _lastItem;
    NSArray * _results;
    long long  _resultsBatch;
    long long  _resultsIndex;
    NSDate * _startDate;
}

- (void).cxx_destruct;
- (id)fastForwardToDate:(id)arg1;
- (void)fetchResults;
- (id)initWithInteractionStore:(id)arg1 bundleIds:(id)arg2 startDate:(id)arg3 batchSize:(unsigned long long)arg4;
- (id)nextObject;

@end
