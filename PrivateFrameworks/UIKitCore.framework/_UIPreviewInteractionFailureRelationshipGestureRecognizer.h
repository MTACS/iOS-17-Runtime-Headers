
@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    UIPreviewInteraction * _previewInteraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIPreviewInteraction *previewInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_gestureRecognizerFailed:(id)arg1;
- (id)initWithPreviewInteraction:(id)arg1;
- (id)previewInteraction;
- (void)setDelegate:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setStateToFailed;
- (void)setStateToRecognized;

@end
