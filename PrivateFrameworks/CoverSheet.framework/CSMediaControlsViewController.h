
@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <CSAdjunctItemHosting, MRUCoverSheetViewControllerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    long long  _mediaRemoteLayout;
    MRUCoverSheetViewController * _mediaRemoteViewController;
}

@property (nonatomic) double containerCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

+ (Class)viewClass;

- (void).cxx_destruct;
- (void)_layoutMediaControls;
- (double)_preferredMediaRemoteHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suggestedFrameForMediaControls;
- (void)_updatePersistentUpdatesEnabled:(bool)arg1;
- (void)_updatePreferredContentSize;
- (void)coverSheetViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)coverSheetViewController:(id)arg1 willChangeToLayout:(long long)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (long long)presentationPriority;
- (long long)presentationType;
- (id)requiredVisualStyleCategories;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
