
@interface SFCapsuleCollectionViewItem : NSObject {
    long long  _animationCount;
    NSMutableDictionary * _cachedContentSizesByState;
    bool  _capsuleContentIsValid;
    bool  _capsuleIsDetached;
    SFCapsuleView * _capsuleView;
    SFCapsuleCollectionView * _collectionView;
}

@property (nonatomic) long long animationCount;
@property (nonatomic) bool capsuleContentIsValid;
@property (nonatomic) bool capsuleIsDetached;
@property (nonatomic) SFCapsuleView *capsuleView;
@property (nonatomic, readonly) SFCapsuleCollectionView *collectionView;

- (void).cxx_destruct;
- (long long)animationCount;
- (bool)capsuleContentIsValid;
- (double)capsuleHeightForWidth:(double)arg1 defaultHeight:(double)arg2 state:(long long)arg3 index:(long long)arg4;
- (bool)capsuleIsDetached;
- (id)capsuleView;
- (id)collectionView;
- (id)initWithCollectionView:(id)arg1;
- (void)invalidateCapsuleHeight;
- (void)setAnimationCount:(long long)arg1;
- (void)setCapsuleContentIsValid:(bool)arg1;
- (void)setCapsuleIsDetached:(bool)arg1;
- (void)setCapsuleView:(id)arg1;

@end
