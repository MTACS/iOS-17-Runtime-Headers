
@interface NSXPCStoreConnection : NSObject {
    NSXPCConnection * _connection;
    NSXPCStore * _store;
}

- (void)dealloc;
- (id)initForStore:(id)arg1;

@end
