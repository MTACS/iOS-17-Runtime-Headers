
@interface ICDocCamImageQuadEditPanGestureRecognizer : UIPanGestureRecognizer {
    <ICDocCamImageQuadEditPanGestureRecognizerDelegate> * _quadEditorDelegate;
}

@property (nonatomic) <ICDocCamImageQuadEditPanGestureRecognizerDelegate> *quadEditorDelegate;

- (void).cxx_destruct;
- (id)quadEditorDelegate;
- (void)setQuadEditorDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
