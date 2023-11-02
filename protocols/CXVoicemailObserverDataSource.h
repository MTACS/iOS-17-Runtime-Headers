
@protocol CXVoicemailObserverDataSource <NSObject>

@required

- (void)addDelegate:(id <CXVoicemailObserverDataSourceDelegate>)arg1;
- (void)invalidate;
- (void)removeDelegate:(id <CXVoicemailObserverDataSourceDelegate>)arg1;
- (void)requestTransaction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)voicemailUUIDToVoicemailMap;

@end
