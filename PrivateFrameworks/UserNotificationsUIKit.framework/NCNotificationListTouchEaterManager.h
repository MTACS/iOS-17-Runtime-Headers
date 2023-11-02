
@interface NCNotificationListTouchEaterManager : NSObject <UIGestureRecognizerDelegate> {
    <NCNotificationListCoalescingControlsHandler> * _coalescingControlsHandlerInClearState;
    bool  _enabled;
    NCNotificationListSectionHeaderView * _headerViewInClearState;
    PLSwipeInteraction * _swipeInteractionInRevealedState;
    NCTouchEaterGestureRecognizer * _touchEater;
}

@property (nonatomic) <NCNotificationListCoalescingControlsHandler> *coalescingControlsHandlerInClearState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) NCNotificationListSectionHeaderView *headerViewInClearState;
@property (readonly) Class superclass;
@property (nonatomic) PLSwipeInteraction *swipeInteractionInRevealedState;
@property (nonatomic, retain) NCTouchEaterGestureRecognizer *touchEater;

- (void).cxx_destruct;
- (void)_handleEatenTouch:(id)arg1;
- (void)_handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)_handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (bool)_isPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1 insideView:(id)arg2;
- (bool)_shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (id)coalescingControlsHandlerInClearState;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)headerViewInClearState;
- (id)initForView:(id)arg1;
- (bool)isEnabled;
- (void)removeTouchGestureRecognizer;
- (void)setCoalescingControlsHandlerInClearState:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHeaderViewInClearState:(id)arg1;
- (void)setSwipeInteractionInRevealedState:(id)arg1;
- (void)setTouchEater:(id)arg1;
- (void)setTouchEaterEnabled:(bool)arg1;
- (id)swipeInteractionInRevealedState;
- (id)touchEater;

@end
