
@interface CKAcknowledgmentVotingViewAnimator : NSObject {
    UIView * _animationContainerView;
    NSArray * _animatorModelItems;
    <CKAcknowledgmentVotingViewAnimatorDelegate> * _delegate;
    NSArray * _sectionAnimators;
}

@property (nonatomic, retain) UIView *animationContainerView;
@property (nonatomic, copy) NSArray *animatorModelItems;
@property (nonatomic) <CKAcknowledgmentVotingViewAnimatorDelegate> *delegate;
@property (nonatomic, copy) NSArray *sectionAnimators;

- (void).cxx_destruct;
- (id)animationContainerView;
- (id)animatorModelItems;
- (id)delegate;
- (id)initWithCollectionView:(id)arg1 animatorModelItems:(id)arg2 acknowledgmentTypes:(id)arg3;
- (id)sectionAnimators;
- (void)setAnimationContainerView:(id)arg1;
- (void)setAnimatorModelItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSectionAnimators:(id)arg1;
- (void)startAnimationWithDelay:(double)arg1;

@end
