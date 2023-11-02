
@interface NTKGreenfieldHighlightableFaceContainerView : UIView {
    NTKFaceViewController * _faceViewController;
    UIView * _highlightedDisplaysContainerView;
    NSMutableDictionary * _highlightedSlotToDisplayWrapperViewMapping;
    NSMutableSet * _highlightedSlots;
    NTKFace * _originalFace;
    UIView * _overlayView;
    NSMutableDictionary * _slotToTemplateMapping;
}

+ (id)_createFaceForDisplayingFrom:(id)arg1;

- (void).cxx_destruct;
- (void)_toggleHighlight:(bool)arg1 forComplicationWrapperViewAtSlot:(id)arg2;
- (void)_updateTemplateForSlot:(id)arg1;
- (id)initWithFace:(id)arg1;
- (void)layoutSubviews;
- (void)setComplicationDisplayViewState:(long long)arg1 forSlot:(id)arg2;
- (void)setTemplate:(id)arg1 forSlot:(id)arg2;

@end
