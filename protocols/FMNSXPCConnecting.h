
@protocol FMNSXPCConnecting <NSObject>

@required

- (void)addFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)invalidate;
- (id)remoteObjectProxy;

@end
