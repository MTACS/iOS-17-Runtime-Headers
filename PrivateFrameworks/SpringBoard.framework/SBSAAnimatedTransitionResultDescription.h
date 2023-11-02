
@interface SBSAAnimatedTransitionResultDescription : NSObject <SBSAAnimatedTransitionResultDescribing, SBSABlockMutating> {
    NSUUID * _animatedTransitionIdentifier;
    <SBSAInterfaceElementPropertyIdentifying> * _associatedInterfaceElementPropertyIdentity;
    bool  _finished;
    bool  _retargeted;
    double  _targetedMilestone;
    bool  _transitionEndTargeted;
}

@property (setter=_setAnimatedTransitionIdentifier:, nonatomic, copy) NSUUID *animatedTransitionIdentifier;
@property (setter=_setAssociatedInterfaceElementPropertyIdentityIdentity:, nonatomic, copy) <SBSAInterfaceElementPropertyIdentifying> *associatedInterfaceElementPropertyIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setFinished:, nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (setter=_setRetargeted:, nonatomic) bool retargeted;
@property (readonly) Class superclass;
@property (setter=_setTargetedMilestone:, nonatomic) double targetedMilestone;
@property (getter=isTransitionEndTargeted, setter=_setTransitionEndTargeted:, nonatomic) bool transitionEndTargeted;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setAnimatedTransitionIdentifier:(id)arg1;
- (void)_setAssociatedInterfaceElementPropertyIdentityIdentity:(id)arg1;
- (void)_setFinished:(bool)arg1;
- (void)_setRetargeted:(bool)arg1;
- (void)_setTargetedMilestone:(double)arg1;
- (void)_setTransitionEndTargeted:(bool)arg1;
- (id)animatedTransitionIdentifier;
- (id)associatedInterfaceElementPropertyIdentity;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)finished;
- (unsigned long long)hash;
- (id)initWithAnimatedTransitionResultDescription:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTransitionEndTargeted;
- (bool)retargeted;
- (double)targetedMilestone;

@end
