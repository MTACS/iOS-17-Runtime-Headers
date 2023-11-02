
@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject {
    id /* block */  _animationBlock;
    bool  _hidden;
    long long  _hideRequestCounter;
}

@property (nonatomic, readonly, copy) id /* block */ animationBlock;
@property (nonatomic) bool hidden;

- (void).cxx_destruct;
- (void)_setHidden:(bool)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)_setHidden:(bool)arg1 animated:(bool)arg2 withRequstID:(long long)arg3;
- (id /* block */)animationBlock;
- (bool)hidden;
- (id)initWithAnimationBlock:(id /* block */)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;

@end
