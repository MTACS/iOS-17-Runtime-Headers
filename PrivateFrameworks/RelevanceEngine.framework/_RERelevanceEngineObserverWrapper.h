
@interface _RERelevanceEngineObserverWrapper : NSObject <RERelevanceEngineObserver> {
    <RERelevanceEngineObserver> * _observer;
    struct { 
        unsigned int implementsPerformBatchUpdate : 1; 
        unsigned int implementsReloadElement : 1; 
        unsigned int implementsRemoveElement : 1; 
        unsigned int implementsInsertElement : 1; 
        unsigned int implementsMoveElement : 1; 
        unsigned int implementsElementIsVisible : 1; 
        unsigned int implementsRelevanceUpdate : 1; 
        unsigned int implementsRelevanceUpdateBegan : 1; 
        unsigned int implementsRelevanceUpdateFinished : 1; 
    }  _observerCallbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <RERelevanceEngineObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;
- (id)observer;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didUpdateRelevanceForElement:(id)arg2;
- (bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1;

@end
