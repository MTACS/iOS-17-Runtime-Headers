
@interface PXStoryAnimationController : PXStoryController <PXStoryMutableAnimationController> {
    NSMutableDictionary * _animationInfoByIdentifier;
    NSCountedSet * _checkOutCountsByIdentifier;
    bool  _isUpdatingAnimations;
    PXStoryModel * _model;
}

@property (nonatomic, readonly) PXStoryModel *model;

- (void).cxx_destruct;
- (void)_configureAnimation:(id)arg1 withAnimationInfo:(id)arg2;
- (void)_handleAnimationInvalidation;
- (void)_invalidateAnimations;
- (void)_updateAnimations;
- (void)addAnimation:(id)arg1;
- (void)checkInAnimation:(id)arg1;
- (id)checkOutAnimationWithIdentifier:(id)arg1 creationBlock:(id /* block */)arg2;
- (void)configureUpdater:(id)arg1;
- (void)enumerateAnimationsUsingBlock:(id /* block */)arg1;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
