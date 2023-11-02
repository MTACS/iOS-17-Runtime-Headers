
@interface AXUINubbitContext : NSObject {
    UICollisionBehavior * _collisionBehavior;
    <AXUINubbitDelegate> * _delegate;
    AXAssertion * _disableDashBoardSystemGesturesAssertion;
    AXAssertion * _disableSystemGesturesAssertion;
    UIDynamicAnimator * _dynamicAnimator;
    UIDynamicItemBehavior * _dynamicItemBehavior;
    AXDispatchTimer * _fadeTimer;
    UIAttachmentBehavior * _followPanBehavior;
    UIGravityBehavior * _gravityBehavior;
    UIPanGestureRecognizer * _moveNubbitGestureRecognizer;
    UIView * _nubbit;
    double  _originalAlpha;
    UISnapBehavior * _snapToBoundaryBehavior;
}

@property (nonatomic, retain) UICollisionBehavior *collisionBehavior;
@property (nonatomic) <AXUINubbitDelegate> *delegate;
@property (nonatomic, retain) AXAssertion *disableDashBoardSystemGesturesAssertion;
@property (nonatomic, retain) AXAssertion *disableSystemGesturesAssertion;
@property (nonatomic, retain) UIDynamicAnimator *dynamicAnimator;
@property (nonatomic, retain) UIDynamicItemBehavior *dynamicItemBehavior;
@property (nonatomic, retain) AXDispatchTimer *fadeTimer;
@property (nonatomic, retain) UIAttachmentBehavior *followPanBehavior;
@property (nonatomic, retain) UIGravityBehavior *gravityBehavior;
@property (nonatomic, retain) UIPanGestureRecognizer *moveNubbitGestureRecognizer;
@property (nonatomic, retain) UIView *nubbit;
@property (nonatomic) double originalAlpha;
@property (nonatomic, retain) UISnapBehavior *snapToBoundaryBehavior;

- (void).cxx_destruct;
- (id)collisionBehavior;
- (id)delegate;
- (id)disableDashBoardSystemGesturesAssertion;
- (id)disableSystemGesturesAssertion;
- (id)dynamicAnimator;
- (id)dynamicItemBehavior;
- (id)fadeTimer;
- (id)followPanBehavior;
- (id)gravityBehavior;
- (id)moveNubbitGestureRecognizer;
- (id)nubbit;
- (double)originalAlpha;
- (void)setCollisionBehavior:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableDashBoardSystemGesturesAssertion:(id)arg1;
- (void)setDisableSystemGesturesAssertion:(id)arg1;
- (void)setDynamicAnimator:(id)arg1;
- (void)setDynamicItemBehavior:(id)arg1;
- (void)setFadeTimer:(id)arg1;
- (void)setFollowPanBehavior:(id)arg1;
- (void)setGravityBehavior:(id)arg1;
- (void)setMoveNubbitGestureRecognizer:(id)arg1;
- (void)setNubbit:(id)arg1;
- (void)setOriginalAlpha:(double)arg1;
- (void)setSnapToBoundaryBehavior:(id)arg1;
- (id)snapToBoundaryBehavior;

@end
