
@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id /* block */  _completion;
    double  _duration;
    NSIndexPath * _indexPath;
    bool  _presenting;
    UIImage * _thumbnailImage;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic) bool presenting;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (bool)_shouldCrossFadeNavigationBar;
- (void)animateTransition:(id)arg1;
- (id /* block */)completion;
- (double)duration;
- (id)indexPath;
- (id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (bool)presenting;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;
- (double)transitionDuration:(id)arg1;

@end
