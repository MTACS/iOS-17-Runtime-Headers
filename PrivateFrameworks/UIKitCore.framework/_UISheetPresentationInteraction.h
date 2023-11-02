
@interface _UISheetPresentationInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    <_UISheetPresentationInteractionDelegate> * __delegate;
    UIPanGestureRecognizer * __panGestureRecognizer;
    UIView * _view;
}

@property (setter=_setDelegate:, nonatomic) <_UISheetPresentationInteractionDelegate> *_delegate;
@property (setter=_setPanGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *_panGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (id)_delegate;
- (void)_handlePan:(id)arg1;
- (id)_panGestureRecognizer;
- (void)_setDelegate:(id)arg1;
- (void)_setPanGestureRecognizer:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
