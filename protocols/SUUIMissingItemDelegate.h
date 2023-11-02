
@protocol SUUIMissingItemDelegate <NSObject>

@optional

- (void)missingItemLoader:(SUUIMissingItemLoader *)arg1 didLoadItems:(NSDictionary *)arg2 invalidItemIdentifiers:(NSSet *)arg3;

@end
