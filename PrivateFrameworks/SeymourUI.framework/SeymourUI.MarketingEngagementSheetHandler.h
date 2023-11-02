
@interface SeymourUI.MarketingEngagementSheetHandler : NSObject <AMSUIEngagementViewControllerDelegate> {
    void placement;
}

- (void).cxx_destruct;
- (id)engagementViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)engagementViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;
- (bool)engagementViewController:(id)arg1 handleDynamicDelegateAction:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)engagementViewControllerShouldDismiss:(id)arg1;
- (id)init;

@end
