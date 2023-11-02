
@protocol CNQuickContactActionDelegate <NSObject>

@required

- (void)contactAction:(CNQuickContactAction *)arg1 presentViewController:(UIViewController *)arg2;
- (void)contactActionDidUpdate:(CNQuickContactAction *)arg1;

@end
