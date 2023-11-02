
@interface UIScrollViewScrollAnimation : UIAnimation {
    double  _accuracy;
    bool  _adjustsForContentOffsetDelta;
    bool  _beingReplacedForDiscreteScroll;
    CABasicAnimation * _customAnimation;
    bool  _forDiscreteScroll;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetOffset;
    bool  _targetOffsetValidAtStart;
}

- (void).cxx_destruct;
- (void)adjustForContentOffsetDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (float)progressForFraction:(float)arg1;
- (void)setProgress:(float)arg1;

@end
