
@protocol NviSignalProvider <NSObject>

@required

- (void)addDelegate:(id <NviSignalProviderDelegate>)arg1;
- (id)initWithDataSource:(id <NviDataSource>)arg1 assetsProvider:(id <NviAssetsProvider>)arg2;
- (void)removeDelegate:(id <NviSignalProviderDelegate>)arg1;
- (void)reset;
- (unsigned long long)sigType;
- (void)startWithNviContext:(void *)arg1 didStartHandler:(void *)arg2; // needs 2 arg types, found 8: NviContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stopWithDidStopHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
