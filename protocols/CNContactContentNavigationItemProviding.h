
@protocol CNContactContentNavigationItemProviding <NSObject>

@required

- (UIBarButtonItem *)doneButtonItem;
- (UINavigationItem *)effectiveNavigationItem;
- (<CNContactContentNavigationItemDelegate> *)navigationItemDelegate;
- (void)setNavigationItemDelegate:(id <CNContactContentNavigationItemDelegate>)arg1;

@end
