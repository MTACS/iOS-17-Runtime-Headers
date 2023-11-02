
@interface WKApplicationStateTrackingView : UIView {
    struct unique_ptr<WebKit::ApplicationStateTracker, std::default_delete<WebKit::ApplicationStateTracker>> { 
        struct __compressed_pair<WebKit::ApplicationStateTracker *, std::default_delete<WebKit::ApplicationStateTracker>> { 
            struct ApplicationStateTracker {} *__value_; 
        } __ptr_; 
    }  _applicationStateTracker;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webViewToTrack;
}

@property (nonatomic, readonly) UIView *_contentView;
@property (nonatomic, readonly) bool isBackground;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_applicationWillEnterForeground;
- (id)_contentView;
- (void)_didCompleteSnapshotSequence;
- (void)_willBeginSnapshotSequence;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (bool)isBackground;
- (void)willMoveToWindow:(id)arg1;

@end
