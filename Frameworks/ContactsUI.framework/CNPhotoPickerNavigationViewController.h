
@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController {
    bool  _allowRotation;
    bool  _disablingRotation;
    bool  _isShowingKeyboard;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousSize;
    NSArray * _trapOverlayConstraints;
    CNPhotoPickerTrapView * _trapOverlayView;
}

@property (nonatomic) bool allowRotation;
@property (nonatomic) bool disablingRotation;
@property (nonatomic) bool isShowingKeyboard;
@property (nonatomic) struct CGSize { double x1; double x2; } previousSize;
@property (nonatomic, retain) NSArray *trapOverlayConstraints;
@property (nonatomic, retain) CNPhotoPickerTrapView *trapOverlayView;

- (void).cxx_destruct;
- (bool)allowRotation;
- (void)beginDisablingAutorotation;
- (void)dealloc;
- (bool)disablingRotation;
- (void)endDisablingAutorotation;
- (void)endDisablingAutorotationIfNeeded;
- (id)initWithRootViewController:(id)arg1;
- (bool)isDisplayingTrapView;
- (bool)isShowingKeyboard;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (struct CGSize { double x1; double x2; })previousSize;
- (void)setAllowRotation:(bool)arg1;
- (void)setDisablingRotation:(bool)arg1;
- (void)setIsShowingKeyboard:(bool)arg1;
- (void)setPreviousSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTrapOverlayConstraints:(id)arg1;
- (void)setTrapOverlayView:(id)arg1;
- (void)setupTrapOverlayView;
- (bool)shouldDisplayTrapOverlayView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)trapOverlayConstraints;
- (id)trapOverlayView;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
