
@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    _UIDynamicValueAnimation * _dismissAnimation;
    UIPanGestureRecognizer * _gestureRecognizer;
    PKPassGroupView * _groupView;
    bool  _invalidated;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panningViewStartPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panningViewTargetPosition;
    double  _panningViewTargetScale;
    bool  _recognizing;
    unsigned int  _updateReason;
    struct _UIUpdateRequest { 
        unsigned int flags; 
        unsigned int minRate; 
        unsigned int preferredRate; 
        unsigned int maxRate; 
        unsigned long long phase; 
        unsigned long long load; 
    }  _updateRequest;
    id /* block */  _updater;
    bool  _updating;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
