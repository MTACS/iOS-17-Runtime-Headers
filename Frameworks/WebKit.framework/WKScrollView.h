
@interface WKScrollView : UIScrollView {
    bool  _backgroundColorSetByClient;
    bool  _bouncesHorizontalInternal;
    bool  _bouncesSetByClient;
    bool  _bouncesVerticalInternal;
    bool  _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    bool  _contentInsetWasExternallyOverridden;
    struct optional<UIEdgeInsets> { 
        union { 
            BOOL __null_state_; 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _contentScrollInsetFromClient;
    struct optional<UIEdgeInsets> { 
        union { 
            BOOL __null_state_; 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _contentScrollInsetInternal;
    bool  _decelerationRateSetByClient;
    struct RetainPtr<WKScrollViewDelegateForwarder> { 
        void *m_ptr; 
    }  _delegateForwarder;
    struct WeakObjCPtr<id<UIScrollViewDelegate>> { 
        id m_weakReference; 
    }  _externalDelegate;
    bool  _indicatorStyleSetByClient;
    WKWebView<UIScrollViewDelegate> * _internalDelegate;
    double  _keyboardBottomInsetAdjustment;
    bool  _scrollEnabledByClient;
    bool  _scrollEnabledInternal;
    bool  _zoomEnabledByClient;
    bool  _zoomEnabledInternal;
}

@property (nonatomic, readonly) bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;
@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(bool)arg2 lastAdjustment:(double*)arg3;
- (bool)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (struct CGSize { double x1; double x2; })_currentTopLeftRubberbandAmount;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize { double x1; double x2; })arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(bool*)arg5;
- (void)_sendPinchGestureActionEarlyIfNeeded;
- (void)_setBackgroundColorInternal:(id)arg1;
- (void)_setBouncesInternal:(bool)arg1 vertical:(bool)arg2;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;
- (void)_setContentScrollInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_setContentScrollInsetInternal:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize { double x1; double x2; })arg1;
- (void)_setDecelerationRateInternal:(double)arg1;
- (void)_setIndicatorStyleInternal:(long long)arg1;
- (void)_setScrollEnabledInternal:(bool)arg1;
- (void)_setZoomEnabledInternal:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_systemContentInset;
- (void)_updateBouncability;
- (void)_updateContentScrollInset;
- (void)_updateDelegate;
- (void)_updateScrollability;
- (void)_updateZoomability;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)internalDelegate;
- (bool)isScrollEnabled;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounces:(bool)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setDecelerationRate:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndicatorStyle:(long long)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setZoomEnabled:(bool)arg1;

@end
