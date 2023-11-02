
@interface WorkflowEditor.SummaryModal : NSObject <UIPopoverPresentationControllerDelegate> {
    void dismissBehavior;
    void isPopoverInCompactWidth;
    void onDismiss;
    void onEditingChange;
    void viewController;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)init;
- (void)presentationControllerDidDismiss:(id)arg1;

@end
