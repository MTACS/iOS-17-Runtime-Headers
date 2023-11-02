
@interface SBHIconViewContextMenuWrapperViewController : UIViewController <SBHRecentsDocumentExtensionProviderDelegate> {
    double  _backgroundScale;
    MTMaterialView * _backgroundView;
    UIViewController * _contentViewController;
    double  _continuousCornerRadius;
    NSString * _groupNameBase;
    NSArray * _layoutConstraints;
}

@property (nonatomic) double backgroundScale;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupNameBase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyContinuousCornerRadius;
- (void)_applyPreferredContentSizeChange:(struct CGSize { double x1; double x2; })arg1;
- (double)backgroundScale;
- (id)contentViewController;
- (double)continuousCornerRadius;
- (id)groupNameBase;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)recentsDocumentExtensionViewControllerRequestsDismiss:(id)arg1;
- (void)setBackgroundScale:(double)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setGroupNameBase:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
