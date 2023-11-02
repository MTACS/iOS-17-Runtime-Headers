
@interface _UIWindowSceneDragInteractionImpl_iOS : NSObject <_UIWindowSceneDragInteractionImpl> {
    _UIClientToHostRelationshipGestureInteraction * _clientRelationshipInteraction;
    UIPanGestureRecognizer * _directTouchPanGestureRecognizer;
    _UIRelationshipGestureRecognizer * _failureRelationshipGestureRecognizer;
    UIPanGestureRecognizer * _pointerTouchPanGestureRecognizer;
    UIView * _view;
}

@property (nonatomic, retain) _UIClientToHostRelationshipGestureInteraction *clientRelationshipInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPanGestureRecognizer *directTouchPanGestureRecognizer;
@property (nonatomic, retain) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPanGestureRecognizer *pointerTouchPanGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_didRecognizePanGesture:(id)arg1;
- (id)_makeDraggingPanGestureRecognizer;
- (id)clientRelationshipInteraction;
- (void)didMoveToView:(id)arg1;
- (id)directTouchPanGestureRecognizer;
- (id)failureRelationshipGestureRecognizer;
- (id)gestureForFailureRelationships;
- (id)init;
- (id)pointerTouchPanGestureRecognizer;
- (void)setClientRelationshipInteraction:(id)arg1;
- (void)setDirectTouchPanGestureRecognizer:(id)arg1;
- (void)setFailureRelationshipGestureRecognizer:(id)arg1;
- (void)setPointerTouchPanGestureRecognizer:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
