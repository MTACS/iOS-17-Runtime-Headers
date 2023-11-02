
@protocol RemoteUITableFooter <NSObject>

@required

- (id)initWithAttributes:(NSDictionary *)arg1;

@optional

- (void)configureInPage:(RUIPage *)arg1;
- (double)footerHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (double)footerHeightForWidth:(double)arg1 inView:(UIView *)arg2;
- (void)setDelegate:(id <RUITableFooterDelegate>)arg1;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;

@end
