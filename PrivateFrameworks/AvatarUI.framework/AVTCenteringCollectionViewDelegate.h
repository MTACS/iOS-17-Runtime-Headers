
@interface AVTCenteringCollectionViewDelegate : NSObject <UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    <UICollectionViewDelegate> * _delegate;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    NSIndexPath * _lastHapticOnScrollIndexPath;
    <AVTUILogger> * _logger;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousOffset;
}

@property (nonatomic, readonly) UICollectionViewLayoutAttributes *centerItemAttributes;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UICollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISelectionFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *lastHapticOnScrollIndexPath;
@property (nonatomic, retain) <AVTUILogger> *logger;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)centerItemAttributes;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)feedbackGenerator;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2 environment:(id)arg3;
- (id)lastHapticOnScrollIndexPath;
- (id)logger;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct CGPoint { double x1; double x2; })previousOffset;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setLastHapticOnScrollIndexPath:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setPreviousOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
