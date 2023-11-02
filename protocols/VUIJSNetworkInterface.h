
@protocol VUIJSNetworkInterface <JSExport>

@required

- (void)cancelRequest:(NSString *)arg1;
- (void)fetchConfiguration:(bool)arg1 :(JSValue *)arg2;
- (void)invalidateConfiguration;
- (JSValue *)makeMediaApiRequest:(NSDictionary *)arg1 :(JSValue *)arg2;
- (JSValue *)makeRequest:(NSDictionary *)arg1 :(JSValue *)arg2;
- (JSValue *)makeStoreRequest:(NSDictionary *)arg1 :(JSValue *)arg2;
- (JSValue *)makeUpNextRequest:(NSDictionary *)arg1 :(JSValue *)arg2;
- (void)upNextItemsReceived:(NSArray *)arg1 :(NSString *)arg2;

@end
