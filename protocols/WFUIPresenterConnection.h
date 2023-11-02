
@protocol WFUIPresenterConnection <NSObject>

@required

- (<WFUIPresenterInterface> *)presenterWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (<WFUIPresenterHostInterface> *)host;
- (id /* block */)interruptionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (bool)isConnected;
- (void)setHost:(id <WFUIPresenterHostInterface>)arg1;
- (void)setInterruptionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<WFUIPresenterInterface> *)synchronousPresenterWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
