
@interface UIPreviewInteraction : NSObject {
    <_UIPreviewInteractionImpl> * _interactionImpl;
}

@property (nonatomic) <UIPreviewInteractionDelegate> *delegate;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *touchForceProvider;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initClickBasedImplementationWithView:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
