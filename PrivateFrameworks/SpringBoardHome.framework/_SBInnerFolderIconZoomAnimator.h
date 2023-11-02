
@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator {
    SBIconView * _folderIconView;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _folderIconViewScaleTransform;
    SBFloatyFolderView * _folderView;
}

@property (nonatomic, retain) SBHFolderZoomSettings *settings;

- (void).cxx_destruct;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id /* block */)arg3;
- (void)_applyIconCrossfadeForZoomFraction:(double)arg1;
- (void)_applyIconTransformForZoomFraction:(double)arg1;
- (void)_calculateZoomedOffset:(struct CGPoint { double x1; double x2; }*)arg1 scale:(struct CGPoint { double x1; double x2; }*)arg2 forIcon:(id)arg3 withView:(id)arg4;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(struct CGPoint { double x1; double x2; })arg3;

@end
