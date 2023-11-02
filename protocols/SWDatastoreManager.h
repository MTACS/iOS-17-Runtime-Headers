
@protocol SWDatastoreManager <NSObject>

@required

- (void)addObserver:(id <SWDatastoreObserver>)arg1;
- (SWDatastore *)datastore;
- (void)removeObserver:(id <SWDatastoreObserver>)arg1;
- (void)reset;
- (void)updateDatastore:(void *)arg1 originatingSession:(void *)arg2 forceUpdate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SWDatastore *, <SWSession> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
