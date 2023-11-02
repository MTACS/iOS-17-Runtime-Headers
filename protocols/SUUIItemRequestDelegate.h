
@protocol SUUIItemRequestDelegate <NSObject>

@optional

- (void)itemRequest:(SUUIItemResourceRequest *)arg1 didFinishWithItems:(NSDictionary *)arg2;
- (void)itemRequest:(SUUIItemResourceRequest *)arg1 didFinishWithItems:(NSDictionary *)arg2 invalidItemIdentifiers:(NSSet *)arg3;

@end
