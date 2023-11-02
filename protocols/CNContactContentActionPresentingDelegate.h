
@protocol CNContactContentActionPresentingDelegate <NSObject>

@required

- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 dismissChildContactViewController:(CNContactContentViewController *)arg2 forAction:(CNContactAction *)arg3;
- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 prepareChildContactViewController:(CNContactContentViewController *)arg2 forAction:(CNContactAction *)arg3;
- (void)contactDisplayViewController:(CNContactContentDisplayViewController *)arg1 presentChildContactViewController:(CNContactContentViewController *)arg2 forAction:(CNContactAction *)arg3;

@end
