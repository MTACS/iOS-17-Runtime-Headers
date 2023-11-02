
@interface _UITextLinkInteractionSession : NSObject {
    UITextItemInteractionInteraction * _interaction;
    UIView<UITextLinkInteraction> * _linkInteractionView;
}

- (void).cxx_destruct;
- (bool)_allowItemInteractions;
- (bool)canInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)initWithTextItemInteraction:(id)arg1;
- (bool)tapOnLinkWithGesture:(id)arg1;

@end
