
@protocol SPPersistentConnectionProtocol <NSObject>

@required

- (void)beaconsToMaintainPersistentConnection:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)startRefreshingPersistentConnectionWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)stopRefreshingPersistentConnection;

@end
