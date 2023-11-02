
@interface _UIContextMenuActionsOnlyViewController : UIViewController {
    UITargetedPreview * _sourcePreview;
}

@property (nonatomic, retain) UITargetedPreview *sourcePreview;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
- (id)initWithTargetedPreview:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setSourcePreview:(id)arg1;
- (id)sourcePreview;
- (void)viewDidLoad;

@end
