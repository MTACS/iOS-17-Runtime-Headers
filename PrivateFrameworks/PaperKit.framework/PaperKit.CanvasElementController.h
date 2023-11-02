
@interface PaperKit.CanvasElementController : NSObject <PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate> {
    void canEditDescription;
    void canEditVellumOpacity;
    void delegate;
    void editingContainerView;
    void isApplyingStyle;
    void shapeStyleController;
    void shouldDeselectElementsWhenToolPickerIsHidden;
    void signatureStyleController;
    void textStyleController;
    void toolPickerController;
}

- (void).cxx_destruct;
- (void)_toolPicker:(id)arg1 didChangeColor:(id)arg2;
- (bool)_toolPicker:(id)arg1 shouldChangeSelectedToolColor:(id)arg2;
- (id)_toolPickerCurrentSelectionColor:(id)arg1;
- (void)_toolPickerDidChangePosition:(id)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (void)_toolPickerDidChangeScaleFactor:(id)arg1;
- (id)init;
- (void)toolPickerFramesObscuredDidChange:(id)arg1;

@end
