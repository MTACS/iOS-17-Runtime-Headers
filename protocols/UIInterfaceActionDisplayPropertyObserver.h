
@protocol UIInterfaceActionDisplayPropertyObserver <NSObject>

@required

- (void)interfaceAction:(UIInterfaceAction *)arg1 reloadDisplayedContentActionProperties:(NSArray *)arg2;
- (void)interfaceAction:(UIInterfaceAction *)arg1 reloadDisplayedContentVisualStyle:(UIInterfaceActionVisualStyle *)arg2;

@end
