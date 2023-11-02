
@interface _TtC26DocumentManagerExecutablesP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTagCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate> {
    void collection;
    void collectionObservationContext;
    void finishedGathering;
    void gatheringKeyPath;
    void group;
    void serialQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  spotlightQueryTimeout;
}

- (void).cxx_destruct;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* block */)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
