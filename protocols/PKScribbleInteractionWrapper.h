
@protocol PKScribbleInteractionWrapper <NSObject>

@required

- (bool)beginSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg1;
- (void)didFinishWritingInElement:(id <NSObject><NSCopying>)arg1;
- (void)endSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg1;
- (void)focusElement:(void *)arg1 initialFocusSelectionReferencePoint:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <NSObject><NSCopying> *, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UITextInput> *, void*
- (bool)focusWillTransformElement:(id <NSObject><NSCopying>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElement:(id <NSObject><NSCopying>)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 element:(id <NSObject><NSCopying>)arg2;
- (<UIInteraction> *)interaction;
- (bool)isElementContainer;
- (bool)isElementFocused:(id <NSObject><NSCopying>)arg1;
- (void)requestElementsInRect:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, long long, void*
- (bool)shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)supportsIsElementFocused;
- (bool)supportsShouldBegin;
- (void)willBeginWritingInElement:(id <NSObject><NSCopying>)arg1;

@optional

- (void)didTargetElement:(id <NSObject><NSCopying>)arg1 forTouches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (UIView *)interactionView;
- (bool)isEditableElement:(id <NSObject><NSCopying>)arg1;
- (bool)isEnabled;
- (bool)shouldDisableInputAssistant;
- (UIView *)view;

@end
