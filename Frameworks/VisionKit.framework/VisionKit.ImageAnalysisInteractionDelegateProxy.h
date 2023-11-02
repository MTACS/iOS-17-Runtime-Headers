
@interface VisionKit.ImageAnalysisInteractionDelegateProxy : NSObject <VKCImageAnalysisInteractionDelegate> {
    void owner;
}

- (void).cxx_destruct;
- (id)contentViewForImageAnalysisInteraction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectForImageAnalysisInteraction:(id)arg1;
- (void)imageAnalysisInteraction:(id)arg1 highlightSelectedItemsValueDidChange:(bool)arg2;
- (void)imageAnalysisInteraction:(id)arg1 liveTextButtonDidChangeToVisible:(bool)arg2;
- (bool)imageAnalysisInteraction:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2 forAnalysisType:(unsigned long long)arg3;
- (id)init;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;
- (void)textSelectionDidChangeForImageAnalysisInteraction:(id)arg1;

@end
