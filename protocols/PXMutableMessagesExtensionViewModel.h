
@protocol PXMutableMessagesExtensionViewModel <NSObject>

@required

- (void)clearSelection;
- (bool)drawerActive;
- (UIViewController *)presentedViewController;
- (NSArray *)recipients;
- (unsigned long long)selectedActivityType;
- (NSDate *)selectedMessageDate;
- (NSString *)selectedMessageText;
- (NSURL *)selectedURL;
- (void)setDrawerActive:(bool)arg1;
- (void)setPresentedViewController:(UIViewController *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSelectedActivityType:(unsigned long long)arg1;
- (void)setSelectedMessageDate:(NSDate *)arg1;
- (void)setSelectedMessageText:(NSString *)arg1;
- (void)setSelectedURL:(NSURL *)arg1;

@end
