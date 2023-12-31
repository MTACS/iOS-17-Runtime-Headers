
@interface NSObserverKeyPath : NSBoundKeyPath <NSObserver, NSOwningObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_receiveBox:(id)arg1;
- (id)description;
- (void)finishObserving;
- (void)setObservation:(id)arg1;

@end
