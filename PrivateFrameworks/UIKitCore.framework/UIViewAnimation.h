
@interface UIViewAnimation : NSObject {
    bool  _animateFromCurrentPosition;
    int  _curve;
    bool  _editing;
    double  _endAlpha;
    double  _endFraction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endRect;
    NSIndexPath * _indexPath;
    bool  _shouldAllowGroupOpacityAfterAnimation;
    bool  _shouldAnimateShadow;
    bool  _shouldClipToBoundsAfterAnimation;
    bool  _shouldDeleteAfterAnimation;
    bool  _shouldResetGroupOpacityAfterAnimation;
    double  _startFraction;
    UIView * _view;
    int  _viewType;
}

- (void).cxx_destruct;
- (id)description;

@end
