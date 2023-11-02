
@protocol COBrowserProtocol <NSObject, NSCopying>

@required

- (<NSObject> *)addObserverUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, <CODiscoveryRecordProtocol> *, void*
- (COBrowserObserverSet *)observerSet;
- (NSArray *)registeredObservers;
- (void)removeObserver:(id <NSObject>)arg1;
- (void)startWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stop;

@end
