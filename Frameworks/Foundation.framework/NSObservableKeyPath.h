
@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>

@property (readonly) <NSObservable> *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_wantsChanges;
- (id)addObserver:(id)arg1;
- (id)changes;
- (id)description;
- (void)removeObservation:(id)arg1;

@end
