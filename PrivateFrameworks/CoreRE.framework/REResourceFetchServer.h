
@interface REResourceFetchServer : NSObject <NSXPCListenerDelegate> {
    void * _resourceFetchManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*resourceFetchManager;
@property (readonly) Class superclass;

- (id)initWithResourceFetchManager:(void*)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void*)resourceFetchManager;

@end
