
@protocol CXCallObserverDataSource <NSObject>

@required

- (void)addDelegate:(id <CXCallObserverDataSourceDelegate>)arg1;
- (NSDictionary *)callUUIDToCallMap;
- (void)invalidate;
- (void)removeDelegate:(id <CXCallObserverDataSourceDelegate>)arg1;
- (void)requestTransaction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
