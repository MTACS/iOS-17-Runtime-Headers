
@interface ICDocCamRetakeTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id /* block */  _completion;
    double  _duration;
    NSIndexPath * _indexPath;
    bool  _presenting;
    UIImage * _retakeImage;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic) bool presenting;
@property (nonatomic, retain) UIImage *retakeImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id /* block */)completion;
- (double)duration;
- (id)indexPath;
- (id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (id)makeUIImageFromCIImage:(id)arg1;
- (bool)presenting;
- (id)retakeImage;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setRetakeImage:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
