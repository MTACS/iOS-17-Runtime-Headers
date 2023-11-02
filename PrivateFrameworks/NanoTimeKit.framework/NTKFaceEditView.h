
@interface NTKFaceEditView : UIView <NTKClockHardwareInput> {
    <NTKFaceEditViewDelegate> * _delegate;
    bool  _disableBreathingAnimationForComplications;
    long long  _editMode;
    UIViewController<NTKFaceViewCustomEditing> * _editingContentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKFaceEditViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableBreathingAnimationForComplications;
@property (nonatomic) long long editMode;
@property (nonatomic, readonly) UIViewController<NTKFaceViewCustomEditing> *editingContentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBottomAlignedKeylineLabelFrameForText:(id)arg1;

- (void).cxx_destruct;
- (bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (void)activate;
- (void)addKeyline:(id)arg1 forKey:(id)arg2 tappable:(bool)arg3 editMode:(long long)arg4;
- (void)applyEditorPresentationProgress:(double)arg1 fromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toEditMode:(long long)arg3 scaled:(bool)arg4;
- (void)applyEditorPresentationProgress:(double)arg1 toEditMode:(long long)arg2 scaled:(bool)arg3;
- (void)applyTransformForCurrentPageView:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)applyTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedScreenBottomAlignedKeylineLabelFrameForText:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })colorPickerFrame;
- (void)deactivateWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (bool)disableBreathingAnimationForComplications;
- (long long)editMode;
- (id)editingColorForColor:(id)arg1;
- (id)editingContentViewController;
- (id)initWithFace:(id)arg1;
- (bool)isTransitioningBetweenEditPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keylineFrameAtSlot:(id)arg1;
- (struct CGPoint { double x1; double x2; })pageOffsetFromCenter:(long long)arg1;
- (void)reloadColorPicker;
- (void)removeAllKeylinesForEditMode:(long long)arg1;
- (void)restartBreathing;
- (void)selectKeylineForKey:(id)arg1 editMode:(long long)arg2;
- (void)setBackgroundFillAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeselectedKeylineFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setDisableBreathingAnimationForComplications:(bool)arg1;
- (void)setEditMode:(long long)arg1;
- (void)setEditingContentViewController:(id)arg1 forEditMode:(long long)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidScrollHandler:(id /* block */)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidStopHandler:(id /* block */)arg2;
- (void)setForEditMode:(long long)arg1 gestureDiscreteScrollHandler:(id /* block */)arg2;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4 animated:(bool)arg5 detentType:(unsigned long long)arg6;
- (void)setInfoText:(id)arg1 forEditMode:(long long)arg2;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelAlignment:(unsigned long long)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelText:(id)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setSelectedKeylineFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)updateSelectionForKeylineAtSlot:(id)arg1 selected:(bool)arg2;
- (void)willActivate;
- (void)willDeactivate;

@end
