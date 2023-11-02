
@interface _UIUnflockItemAnimation : NSObject {
    UITargetedPreview * _destination;
    _UIMorphingPlatterView * _platterView;
    UIView * _positionReferenceView;
    UIViewFloatAnimatableProperty * _positionTrackingProperty;
    _UIUnflockReparentingView * _reparentingContainerView;
    _UIPortalView * _reparentingPortalView;
    long long  _type;
}

@property (nonatomic, retain) UITargetedPreview *destination;
@property (nonatomic, retain) _UIMorphingPlatterView *platterView;
@property (nonatomic, retain) UIView *positionReferenceView;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *positionTrackingProperty;
@property (nonatomic, retain) _UIUnflockReparentingView *reparentingContainerView;
@property (nonatomic, retain) _UIPortalView *reparentingPortalView;
@property (nonatomic) long long type;

+ (id)animationWithPlatterView:(id)arg1 destination:(id)arg2 positionReferenceView:(id)arg3 type:(long long)arg4;

- (void).cxx_destruct;
- (void)complete;
- (id)destination;
- (id)platterView;
- (void)play;
- (id)positionReferenceView;
- (id)positionTrackingProperty;
- (id)reparentingContainerView;
- (id)reparentingPortalView;
- (void)setDestination:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPositionReferenceView:(id)arg1;
- (void)setPositionTrackingProperty:(id)arg1;
- (void)setReparentingContainerView:(id)arg1;
- (void)setReparentingPortalView:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
