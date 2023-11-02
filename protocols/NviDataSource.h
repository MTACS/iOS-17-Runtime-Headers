
@protocol NviDataSource <NSObject>

@required

- (void)addReceiver:(id <NviDataReceiver>)arg1;
- (void)removeReceiver:(id <NviDataReceiver>)arg1;
- (void)startWithNviContext:(void *)arg1 didStartHandler:(void *)arg2; // needs 2 arg types, found 8: NviContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stopWithDidStopHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (unsigned long long)type;

@end
