
@interface PKAMSEnagementMessageCell : UITableViewCell <AMSUIMessageViewControllerDelegate> {
    AMSUIDashboardMessageViewController * _dashboardMessageController;
    PKDashboardPassMessage * _message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKDashboardPassMessage *message;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)displayDialogRequest:(id)arg1;
- (void)layoutSubviews;
- (id)message;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)messageViewController:(id)arg1 shouldEnqueueMetricsForDialogResult:(id)arg2;
- (void)messageViewControllerDidDismiss:(id)arg1;
- (void)prepareForReuse;
- (void)setMessage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
