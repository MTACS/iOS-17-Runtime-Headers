
@interface _UIAutoScrollAssistant : NSObject {
    unsigned long long  _allowedDirections;
    <_UIAutoScrollBehavior> * _behavior;
    CADisplayLink * _displayLink;
    double  _lastTimestamp;
    long long  _mode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceContentOffsetForPoint;
    UIScrollView * _scrollView;
    bool  _started;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchInsets;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) unsigned long long allowedDirections;
@property (nonatomic, retain) <_UIAutoScrollBehavior> *behavior;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) struct CGPoint { double x1; double x2; } referenceContentOffsetForPoint;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) bool started;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchInsets;

- (void).cxx_destruct;
- (void)_adjustPointToCurrentContentOffset;
- (void)_handleAutoScrollerWithContentOffset:(struct CGPoint { double x1; double x2; })arg1 direction:(unsigned long long)arg2;
- (bool)_scrollContinuous;
- (unsigned long long)allowedDirections;
- (void)autoScrollFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)behavior;
- (id)displayLink;
- (void)displayLinkFired:(id)arg1;
- (id)initWithScrollView:(id)arg1;
- (bool)isActive;
- (double)lastTimestamp;
- (long long)mode;
- (struct CGPoint { double x1; double x2; })point;
- (struct CGPoint { double x1; double x2; })referenceContentOffsetForPoint;
- (id)scrollView;
- (void)setAllowedDirections:(unsigned long long)arg1;
- (void)setBehavior:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setLastTimestamp:(double)arg1;
- (void)setMode:(long long)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1 forContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)setReferenceContentOffsetForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStarted:(bool)arg1;
- (void)setTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)started;
- (void)stop;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchInsets;

@end
