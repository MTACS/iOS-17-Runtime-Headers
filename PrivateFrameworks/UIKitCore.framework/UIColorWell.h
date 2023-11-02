
@interface UIColorWell : UIControl <UIDragInteractionDelegate, UIDropInteractionDelegate, _UIColorPickerViewControllerDelegate, _UIColorWellControl> {
    <_UIColorWellDelegate> * __delegate;
    UIColorPickerViewController * _colorPicker;
    UIDragInteraction * _dragInteraction;
    UIDropInteraction * _dropInteraction;
    UIColor * _selectedColor;
    _UIColorWellVisualStyle * _style;
    bool  _supportsAlpha;
    NSString * _title;
}

@property (nonatomic) <_UIColorWellDelegate> *_delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *selectedColor;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAlpha;
@property (nonatomic, copy) NSString *title;

+ (id)styleForColorWell:(id)arg1;

- (void).cxx_destruct;
- (void)_colorPickerViewControllerDidDeselectColor:(id)arg1;
- (void)_colorPickerViewControllerDidHideEyedropper:(id)arg1;
- (void)_colorPickerViewControllerDidShowEyedropper:(id)arg1;
- (void)_commonInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_delegate;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setSelectedColor:(id)arg1 notifyingStyle:(bool)arg2 notifyingUIPicker:(bool)arg3 sendingAction:(bool)arg4;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectedColor;
- (void)setPickerTitle:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSupportsAlpha:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)set_delegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)styleDidSelectColor:(id)arg1;
- (void)styleRequestedColorPickerPresentation;
- (bool)supportsAlpha;
- (id)title;

@end
