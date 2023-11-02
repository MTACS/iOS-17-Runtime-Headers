
@interface UICollectionViewAnimation : NSObject {
    id /* block */  _animationBlock;
    struct { 
        unsigned int animateFromCurrentPosition : 1; 
        unsigned int deleteAfterAnimation : 1; 
        unsigned int rasterizeAfterAnimation : 1; 
        unsigned int resetRasterizationAfterAnimation : 1; 
        unsigned int updateZIndexAfterAnimation : 1; 
    }  _collectionViewAnimationFlags;
    NSMutableArray * _completionHandlers;
    double  _endFraction;
    UICollectionViewLayoutAttributes * _finalLayoutAttributes;
    bool  _parentInCollectionViewDuringAnimation;
    double  _startFraction;
    NSMutableArray * _startupHandlers;
    UICollectionReusableView * _view;
    long long  _viewType;
}

@property (nonatomic, readonly) bool animateFromCurrentPosition;
@property (nonatomic, readonly) bool deleteAfterAnimation;
@property (nonatomic, readonly) double endFraction;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *finalLayoutAttributes;
@property (nonatomic) bool parentInCollectionViewDuringAnimation;
@property (nonatomic) bool rasterizeAfterAnimation;
@property (nonatomic) bool resetRasterizationAfterAnimation;
@property (nonatomic, readonly) double startFraction;
@property (nonatomic, readonly) bool updateZIndexAfterAnimation;
@property (nonatomic, readonly) UICollectionReusableView *view;
@property (nonatomic, readonly) long long viewType;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)addStartupHandler:(id /* block */)arg1;
- (bool)animateFromCurrentPosition;
- (bool)deleteAfterAnimation;
- (id)description;
- (double)endFraction;
- (id)finalLayoutAttributes;
- (id)initWithView:(id)arg1 viewType:(long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(bool)arg6 deleteAfterAnimation:(bool)arg7 customAnimations:(id /* block */)arg8;
- (bool)parentInCollectionViewDuringAnimation;
- (bool)rasterizeAfterAnimation;
- (bool)resetRasterizationAfterAnimation;
- (void)setParentInCollectionViewDuringAnimation:(bool)arg1;
- (void)setRasterizeAfterAnimation:(bool)arg1;
- (void)setResetRasterizationAfterAnimation:(bool)arg1;
- (void)start;
- (double)startFraction;
- (void)startWithAnimator:(id)arg1;
- (bool)updateZIndexAfterAnimation;
- (id)view;
- (long long)viewType;

@end
