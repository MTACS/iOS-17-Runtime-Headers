
@protocol SKUIMissingItemDelegate <NSObject>

@optional

- (void)missingItemLoader:(SKUIMissingItemLoader *)arg1 didLoadItems:(NSDictionary *)arg2 invalidItemIdentifiers:(NSSet *)arg3;

@end
