
@protocol SKUIItemRequestDelegate <NSObject>

@optional

- (void)itemRequest:(SKUIItemResourceRequest *)arg1 didFinishWithItems:(NSDictionary *)arg2;
- (void)itemRequest:(SKUIItemResourceRequest *)arg1 didFinishWithItems:(NSDictionary *)arg2 invalidItemIdentifiers:(NSSet *)arg3;

@end
