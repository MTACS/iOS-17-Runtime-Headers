
@interface GKMessageComposeViewController : MFMessageComposeViewController {
    <GKMessageComposeViewControllerDelegate> * _gkComposeDelegate;
}

@property (nonatomic) <GKMessageComposeViewControllerDelegate> *gkComposeDelegate;

- (void).cxx_destruct;
- (id)gkComposeDelegate;
- (void)setGkComposeDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
