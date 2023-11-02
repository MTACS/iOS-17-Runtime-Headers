
@interface HDDataCollectionAssertion : HDAssertion {
    double  _collectionInterval;
    HDDataCollectionManager * _dataCollectionManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDDataCollectionObserverState * _observerState;
    NSSet * _sampleTypes;
}

@property (nonatomic, copy) HDDataCollectionObserverState *observerState;

- (void).cxx_destruct;
- (id)description;
- (id)observerState;
- (void)setObserverState:(id)arg1;

@end
