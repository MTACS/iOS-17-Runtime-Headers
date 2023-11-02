
@protocol AMSUIEngagementViewControllerDelegate <NSObject>

@optional

- (UIView<AMSUIDynamicContentViewProtocol> *)engagementViewController:(AMSUIEngagementViewController *)arg1 contentViewWithDictionary:(NSDictionary *)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)engagementViewController:(AMSUIEngagementViewController *)arg1 didResolveWithResult:(AMSEngagementResult *)arg2 error:(NSError *)arg3;
- (bool)engagementViewController:(void *)arg1 handleDynamicDelegateAction:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: AMSUIEngagementViewController *, AMSDelegateAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)engagementViewControllerShouldDismiss:(AMSUIEngagementViewController *)arg1;

@end
