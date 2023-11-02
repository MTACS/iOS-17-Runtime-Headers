
@interface UIScribbleInteractionWrapper : NSObject <PKScribbleInteractionWrapper> {
    UIIndirectScribbleInteraction * _indirectInteraction;
    UIScribbleInteraction * _scribbleInteraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UIInteraction> *interaction;
@property (nonatomic, readonly) UIView *interactionView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (bool)beginSuppressingPlaceholderForElement:(id)arg1;
- (id)description;
- (void)didFinishWritingInElement:(id)arg1;
- (void)endSuppressingPlaceholderForElement:(id)arg1;
- (void)focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (bool)focusWillTransformElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElement:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 element:(id)arg2;
- (id)initWithCustomScribbleInteraction:(id)arg1 indirectScribbleInteraction:(id)arg2;
- (id)interaction;
- (bool)isElement:(id)arg1 inFrontOf:(id)arg2;
- (bool)isElementContainer;
- (bool)isElementFocused:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (bool)shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldDisableInputAssistant;
- (id)suggestedStrokeColorForElement:(id)arg1;
- (bool)supportsIsElementFocused;
- (bool)supportsIsElementInFrontOfElement;
- (bool)supportsShouldBegin;
- (id)view;
- (void)willBeginWritingInElement:(id)arg1;

@end
