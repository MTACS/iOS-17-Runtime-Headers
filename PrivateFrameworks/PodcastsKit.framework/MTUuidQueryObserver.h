
@interface MTUuidQueryObserver : MTBaseQueryObserver {
    NSArray * _uuidOrder;
    NSSet * _uuidSet;
}

@property (nonatomic, retain) NSArray *uuidOrder;
@property (nonatomic, retain) NSSet *uuidSet;

- (void).cxx_destruct;
- (id)addResultsChangedHandler:(id /* block */)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)notifyObservers;
- (void)setUuidOrder:(id)arg1;
- (void)setUuidSet:(id)arg1;
- (void)startObserving;
- (id)uuidOrder;
- (id)uuidSet;

@end
