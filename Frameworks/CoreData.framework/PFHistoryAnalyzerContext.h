
@interface PFHistoryAnalyzerContext : NSObject {
    NSPersistentHistoryToken * _finalHistoryToken;
    bool  _isFinished;
    NSMutableDictionary * _objectIDToState;
    PFHistoryAnalyzerOptions * _options;
    NSMutableSet * _processedTransactionIDs;
    NSArray * _sortedStates;
}

- (id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)fetchSortedStates:(id*)arg1;
- (bool)finishProcessing:(id*)arg1;
- (id)initWithOptions:(id)arg1;
- (id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2;
- (bool)processChange:(id)arg1 error:(id*)arg2;
- (bool)processTransaction:(id)arg1 error:(id*)arg2;
- (bool)reset:(id*)arg1;
- (bool)resetStateForObjectID:(id)arg1 error:(id*)arg2;

@end
