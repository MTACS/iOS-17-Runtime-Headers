
@interface _UILumaTrackingBackdropView : UIView {
    unsigned long long  _backgroundLuminanceLevel;
    <_UILumaTrackingBackdropViewDelegate> * _delegate;
    <_UILumaTrackingBackdropViewGroupDelegate> * _groupDelegate;
    bool  _paused;
    struct { 
        double minimum; 
        double maximum; 
    }  _transitionBoundaries;
}

@property (nonatomic, readonly) unsigned long long backgroundLuminanceLevel;
@property (nonatomic, readonly) <_UILumaTrackingBackdropViewDelegate> *delegate;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) struct { double x1; double x2; } transitionBoundaries;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_backdropLayer;
- (void)backdropLayer:(id)arg1 didChangeLuma:(double)arg2;
- (unsigned long long)backgroundLuminanceLevel;
- (id)delegate;
- (id)initWithTransitionBoundaries:(struct { double x1; double x2; })arg1 delegate:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)isPaused;
- (void)setPaused:(bool)arg1;
- (void)setTransitionBoundaries:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })transitionBoundaries;
- (void)unpauseAfterSeedingWithLumaLevel:(unsigned long long)arg1;

@end
