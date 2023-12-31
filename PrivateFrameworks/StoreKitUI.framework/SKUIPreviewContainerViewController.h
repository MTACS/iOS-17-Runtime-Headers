
@interface SKUIPreviewContainerViewController : UIViewController <SKUIViewControllerPreviewing> {
    UIViewController * _childViewController;
}

@property (nonatomic, retain) UIViewController *childViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childViewController;
- (id)previewCommitViewController;
- (void)setChildViewController:(id)arg1;

@end
