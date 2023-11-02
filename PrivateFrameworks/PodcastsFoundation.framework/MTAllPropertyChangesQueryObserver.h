
@interface MTAllPropertyChangesQueryObserver : MTBaseQueryObserver <NSFetchedResultsControllerDelegate> {
    bool  _inCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)addResultsChangedHandler:(id /* block */)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)notifyObservers;
- (void)startObserving;

@end
