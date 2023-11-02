
@interface SBWorkspaceInteractionContext : NSObject {
    UIGestureRecognizer * _gestureRecognizer;
    UIInteractionProgress * _interactionProgress;
}

@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;

- (void).cxx_destruct;
- (id)gestureRecognizer;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;
- (id)interactionProgress;

@end
