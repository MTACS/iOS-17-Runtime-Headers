
@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver> {
    id /* block */  _animatorWaitingForExternalAnimationActionBlock;
    SBAppLayout * _appLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _appLayoutBoundingBox;
    long long  _completedTargetAnimations;
    <SBPIPMorphAnimatorControllerDelegate> * _delegate;
    bool  _gestureInitiated;
    long long  _layoutRole;
    SBPIPContainerViewController * _pictureInPictureContainerViewController;
    NSString * _scenePersistenceIdentifier;
    id /* block */  _setupCompletionBlock;
    int  _targetProcessIdentifier;
    bool  _terminated;
    NSUUID * _uuid;
    SBViewMorphAnimator * _viewMorphAnimator;
    <SBViewMorphAnimatorDataSource> * _viewMorphAnimatorDataSource;
}

@property (nonatomic, copy) id /* block */ animatorWaitingForExternalAnimationActionBlock;
@property (nonatomic, retain) SBAppLayout *appLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } appLayoutBoundingBox;
@property (nonatomic) long long completedTargetAnimations;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBPIPMorphAnimatorControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isGestureInitiated, nonatomic, readonly) bool gestureInitiated;
@property (nonatomic, readonly) bool hasCompletedSourceAnimations;
@property (nonatomic, readonly) bool hasCompletedTargetAnimations;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutRole;
@property (nonatomic) SBPIPContainerViewController *pictureInPictureContainerViewController;
@property (nonatomic, readonly) NSString *scenePersistenceIdentifier;
@property (nonatomic, copy) id /* block */ setupCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int targetProcessIdentifier;
@property (getter=isTerminated, nonatomic, readonly) bool terminated;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) SBViewMorphAnimator *viewMorphAnimator;
@property (nonatomic, readonly) <SBViewMorphAnimatorDataSource> *viewMorphAnimatorDataSource;

- (void).cxx_destruct;
- (bool)_isWaitingForExternalAnimationCompletion;
- (void)_performAnimatorWaitingForExternalAnimationActionBlock;
- (void)_terminate;
- (id /* block */)animatorWaitingForExternalAnimationActionBlock;
- (void)animatorWasInterrupted:(id)arg1;
- (id)appLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })appLayoutBoundingBox;
- (void)cancel;
- (long long)completedTargetAnimations;
- (id)delegate;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(bool)arg2 continueBlock:(id /* block */)arg3;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(bool)arg2 continueBlock:(id /* block */)arg3;
- (bool)hasCompletedSourceAnimations;
- (bool)hasCompletedTargetAnimations;
- (id)initWithTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 appLayout:(id)arg3 layoutRole:(long long)arg4 appLayoutBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 windowScene:(id)arg6 direction:(long long)arg7 gestureInitiated:(bool)arg8 delegate:(id)arg9 uuid:(id)arg10;
- (id)initWithTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 windowScene:(id)arg3 direction:(long long)arg4 gestureInitiated:(bool)arg5 delegate:(id)arg6 uuid:(id)arg7;
- (void)interrupt;
- (bool)isGestureInitiated;
- (bool)isTerminated;
- (long long)layoutRole;
- (id)pictureInPictureContainerViewController;
- (id)scenePersistenceIdentifier;
- (void)setAnimatorWaitingForExternalAnimationActionBlock:(id /* block */)arg1;
- (void)setAppLayout:(id)arg1;
- (void)setAppLayoutBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCompletedTargetAnimations:(long long)arg1;
- (void)setLayoutRole:(long long)arg1;
- (void)setPictureInPictureContainerViewController:(id)arg1;
- (void)setSetupCompletionBlock:(id /* block */)arg1;
- (id /* block */)setupCompletionBlock;
- (int)targetProcessIdentifier;
- (id)uuid;
- (id)viewMorphAnimator;
- (id)viewMorphAnimatorDataSource;
- (void)willRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)willStartSourceAnimations:(unsigned long long)arg1;

@end
