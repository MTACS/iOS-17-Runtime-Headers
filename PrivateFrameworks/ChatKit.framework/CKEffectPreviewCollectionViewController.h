
@interface CKEffectPreviewCollectionViewController : UIViewController {
    NSTimer * _animationTimer;
    UIView * _cellWrapper;
    CKMomentCollectionViewCell * _currentCell;
    CKFullScreenEffect * _currentEffect;
    <CKEffectPreviewCollectionViewControllerDelegate> * _delegate;
    CKFullScreenEffectManager * _fsem;
    bool  _hideEffects;
    NSString * _resizingSavedIdentifier;
}

@property (nonatomic, retain) NSTimer *animationTimer;
@property (nonatomic, retain) UIView *cellWrapper;
@property (nonatomic, retain) CKMomentCollectionViewCell *currentCell;
@property (nonatomic) CKFullScreenEffect *currentEffect;
@property (nonatomic) <CKEffectPreviewCollectionViewControllerDelegate> *delegate;
@property (nonatomic, retain) CKFullScreenEffectManager *fsem;
@property (nonatomic) bool hideEffects;
@property (nonatomic, retain) NSString *resizingSavedIdentifier;

- (void).cxx_destruct;
- (void)addAnimationTimerForCell:(id)arg1;
- (id)animationTimer;
- (id)cellWrapper;
- (id)currentCell;
- (id)currentEffect;
- (void)dealloc;
- (id)delegate;
- (void)displayEffectWithIdentifier:(id)arg1;
- (id)fsem;
- (bool)hideEffects;
- (id)init;
- (void)loadView;
- (id)resizingSavedIdentifier;
- (void)resumeEffect;
- (void)setAnimationTimer:(id)arg1;
- (void)setCellWrapper:(id)arg1;
- (void)setCurrentCell:(id)arg1;
- (void)setCurrentEffect:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFsem:(id)arg1;
- (void)setHideEffects:(bool)arg1;
- (void)setResizingSavedIdentifier:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
