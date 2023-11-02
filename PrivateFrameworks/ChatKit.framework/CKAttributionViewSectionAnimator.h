
@interface CKAttributionViewSectionAnimator : NSObject {
    UIView * _animationContainerView;
    CNAvatarView * _avatarView;
    UICollectionViewLayoutAttributes * _avatarViewAttr;
    CKAttributionImageView * _iconView;
    UICollectionViewLayoutAttributes * _iconViewAttr;
    NSIndexPath * _indexPath;
    CKAttributionViewModelObject * _modelObject;
    CKAttributionCountView * _voteCountLabel;
    UICollectionViewLayoutAttributes * _voteCountViewAttr;
}

@property (nonatomic, readonly) UIView *animationContainerView;
@property (nonatomic, readonly) CNAvatarView *avatarView;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *avatarViewAttr;
@property (nonatomic, readonly) CKAttributionImageView *iconView;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *iconViewAttr;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) CKAttributionViewModelObject *modelObject;
@property (nonatomic, readonly) CKAttributionCountView *voteCountLabel;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *voteCountViewAttr;

- (void).cxx_destruct;
- (void)_updateAckIconViewDelayTime:(double)arg1;
- (void)_updateAvatarViewDelayTime:(double)arg1;
- (void)_updateVoteCountViewDelayTime:(double)arg1;
- (void)animateInIconView:(double)arg1;
- (id)animationContainerView;
- (id)avatarView;
- (id)avatarViewAttr;
- (void)dealloc;
- (id)iconView;
- (id)iconViewAttr;
- (id)indexPath;
- (id)initWithCollectionView:(id)arg1 indexPath:(id)arg2 modelObject:(id)arg3 animationContainerView:(id)arg4;
- (id)modelObject;
- (void)setInsertAvatarDelayTime:(double)arg1;
- (id)voteCountLabel;
- (id)voteCountViewAttr;

@end
