
@interface WKFullScreenWindowController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, WKFullScreenViewControllerDelegate> {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _EVOrganizationName;
    bool  _EVOrganizationNameIsValid;
    WKWebView * __webView;
    bool  _blocksReturnToFullscreenFromPictureInPicture;
    bool  _enterFullscreenNeedsExitPictureInPicture;
    bool  _enterRequested;
    bool  _exitRequested;
    bool  _exitingFullScreen;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalFrame;
    long long  _fullScreenState;
    struct RetainPtr<WKFullScreenViewController> { 
        void *m_ptr; 
    }  _fullscreenViewController;
    bool  _inInteractiveDismiss;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    struct RetainPtr<WKFullScreenInteractiveTransition> { 
        void *m_ptr; 
    }  _interactiveDismissTransitionCoordinator;
    struct RetainPtr<UIPanGestureRecognizer> { 
        void *m_ptr; 
    }  _interactivePanDismissGestureRecognizer;
    struct RetainPtr<UIPinchGestureRecognizer> { 
        void *m_ptr; 
    }  _interactivePinchDismissGestureRecognizer;
    const void * _logIdentifier;
    struct RefPtr<WTF::Logger, WTF::RawPtrTraits<WTF::Logger>, WTF::DefaultRefDerefTraits<WTF::Logger>> { 
        struct Logger {} *m_ptr; 
    }  _logger;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  _notificationListener;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalWindowSize;
    struct unique_ptr<WTF::Observer<void (bool)>, std::default_delete<WTF::Observer<void (bool)>>>="__ptr_"{__compressed_pair<WTF::Observer<void (bool)> *, std::default_delete<WTF::Observer<void (bool)>>>="__value_"^v {}  _pipObserver;
    bool  _returnToFullscreenFromPictureInPicture;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _rootViewController;
    bool  _shouldReturnToFullscreenFromPictureInPicture;
    struct RetainPtr<UISwipeGestureRecognizer> { 
        void *m_ptr; 
    }  _startDismissGestureRecognizer;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _viewControllerForPresentation;
    struct WKWebViewState { 
        float _savedTopContentInset; 
        double _savedPageScale; 
        double _savedViewScale; 
        double _savedZoomScale; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } _savedEdgeInset; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } _savedObscuredInsets; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } _savedScrollIndicatorInsets; 
        struct CGPoint { 
            double x; 
            double y; 
        } _savedContentOffset; 
        double _savedMinimumZoomScale; 
        double _savedMaximumZoomScale; 
        bool _savedBouncesZoom; 
        bool _savedForceAlwaysUserScalable; 
        double _savedMinimumEffectiveDeviceWidth; 
    }  _viewState;
    struct RetainPtr<WKFullScreenPlaceholderView> { 
        void *m_ptr; 
    }  _webViewPlaceholder;
    struct RetainPtr<UIWindow> { 
        void *m_ptr; 
    }  _window;
}

@property (nonatomic) WKWebView *_webView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFullScreen;
@property (nonatomic, readonly) struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*logChannel;
@property (nonatomic, readonly) const void*logIdentifier;
@property (nonatomic, readonly) const void*loggerPtr;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UIView *webViewPlaceholder;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_EVOrganizationName;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_completedExitFullScreen;
- (void)_dismissFullscreenViewController;
- (void)_exitFullscreenImmediately;
- (void)_interactiveDismissChanged:(id)arg1;
- (void)_interactivePinchDismissChanged:(id)arg1;
- (void)_invalidateEVOrganizationName;
- (bool)_isSecure;
- (void*)_manager;
- (void)_reinsertWebViewUnderPlaceholder;
- (struct __SecTrust { }*)_serverTrust;
- (void)_startToDismissFullscreenChanged:(id)arg1;
- (void)_updateLocationInfo;
- (void*)_videoFullscreenManager;
- (id)_webView;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)beganEnterFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)beganExitFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)close;
- (void)dealloc;
- (void)didEnterPictureInPicture;
- (void)didExitPictureInPicture;
- (void)enterFullScreen:(struct CGSize { double x1; double x2; })arg1;
- (void)exitFullScreen;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideUI;
- (id)initWithWebView:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (bool)isFullScreen;
- (struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*)logChannel;
- (const void*)logIdentifier;
- (const void*)loggerPtr;
- (void)placeholderWillMoveToSuperview:(id)arg1;
- (void)requestExitFullScreen;
- (void)requestRestoreFullScreen;
- (void)resetSupportedOrientations;
- (void)setSupportedOrientations:(unsigned long long)arg1;
- (void)set_webView:(id)arg1;
- (void)showUI;
- (void)videoControlsManagerDidChange;
- (void)webViewDidRemoveFromSuperviewWhileInFullscreen;
- (id)webViewPlaceholder;

@end
