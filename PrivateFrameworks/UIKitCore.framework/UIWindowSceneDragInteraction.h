
@interface UIWindowSceneDragInteraction : NSObject <UIInteraction> {
    <_UIWindowSceneDragInteractionImpl> * _impl;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIGestureRecognizer *gestureForFailureRelationships;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_UIWindowSceneDragInteractionImpl> *impl;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)gestureForFailureRelationships;
- (id)impl;
- (id)init;
- (void)setImpl:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
