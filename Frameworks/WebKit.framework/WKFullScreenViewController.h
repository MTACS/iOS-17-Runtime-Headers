
@interface WKFullScreenViewController : UIViewController <UIGestureRecognizerDelegate, UIToolbarDelegate> {
    WKWebView * __webView;
    bool  _animating;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _animatingView;
    struct RetainPtr<UIStackView> { 
        void *m_ptr; 
    }  _banner;
    struct RetainPtr<_WKInsetLabel> { 
        void *m_ptr; 
    }  _bannerLabel;
    struct RetainPtr<_WKExtrinsicButton> { 
        void *m_ptr; 
    }  _cancelButton;
    struct WeakObjCPtr<id<WKFullScreenViewControllerDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  _location;
    struct RetainPtr<UIButton> { 
        void *m_ptr; 
    }  _locationButton;
    double  _nonZeroStatusBarHeight;
    bool  _pictureInPictureActive;
    struct RetainPtr<_WKExtrinsicButton> { 
        void *m_ptr; 
    }  _pipButton;
    struct WKFullScreenViewControllerPlaybackSessionModelClient { 
        int (**_vptr$PlaybackSessionModelClient)(); 
        struct WeakObjCPtr<WKFullScreenViewController> { 
            id m_weakReference; 
        } m_parent; 
        struct RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceAVKit>> { 
            struct PlaybackSessionInterfaceAVKit {} *m_ptr; 
        } m_interface; 
    }  _playbackClient;
    bool  _playing;
    bool  _prefersHomeIndicatorAutoHidden;
    bool  _prefersStatusBarHidden;
    struct FullscreenTouchSecheuristic { 
        double m_weight; 
        struct FullscreenTouchSecheuristicParameters { 
            struct Seconds { 
                double m_value; 
            } rampUpSpeed; 
            struct Seconds { 
                double m_value; 
            } rampDownSpeed; 
            double xWeight; 
            double yWeight; 
            double gamma; 
            double gammaCutoff; 
            double requiredScore; 
        } m_parameters; 
        struct CGSize { 
            double width; 
            double height; 
        } m_size; 
        struct Seconds { 
            double m_value; 
        } m_lastTouchTime; 
        struct CGPoint { 
            double x; 
            double y; 
        } m_lastTouchLocation; 
        double m_lastScore; 
    }  _secheuristic;
    struct RetainPtr<UIStackView> { 
        void *m_ptr; 
    }  _stackView;
    struct optional<unsigned long> { 
        union { 
            BOOL __null_state_; 
            unsigned long long __val_; 
        } ; 
        bool __engaged_; 
    }  _supportedOrientations;
    struct RetainPtr<NSLayoutConstraint> { 
        void *m_ptr; 
    }  _topConstraint;
    struct RetainPtr<UILayoutGuide> { 
        void *m_ptr; 
    }  _topGuide;
    struct RetainPtr<UILongPressGestureRecognizer> { 
        void *m_ptr; 
    }  _touchGestureRecognizer;
    bool  _valid;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{RectEdges<float>={array<float' */ struct  _effectiveFullscreenInsets; /* unknown property attribute:  4UL>=[4f]}} */
@property (nonatomic, readonly) void*_manager;
@property (nonatomic) WKWebView *_webView;
@property (getter=isAnimating, nonatomic) bool animating;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKFullScreenViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *location;
@property (getter=isPictureInPictureActive, nonatomic) bool pictureInPictureActive;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic) bool prefersStatusBarHidden;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (id)_createButtonWithExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (struct RectEdges<float> { struct array<float, 4UL> { float x_1_1_1[4]; } x1; })_effectiveFullscreenInsets;
- (void*)_manager;
- (void)_showPhishingAlert;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_togglePiPAction:(id)arg1;
- (void)_touchDetected:(id)arg1;
- (void)_updateWebViewFullscreenInsets;
- (id)_webView;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideBanner;
- (void)hideUI;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (bool)isAnimating;
- (bool)isPictureInPictureActive;
- (bool)isPlaying;
- (void)loadView;
- (id)location;
- (long long)preferredStatusBarStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)resetSupportedOrientations;
- (void)setAnimating:(bool)arg1;
- (void)setAnimatingViewAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPictureInPictureActive:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPrefersHomeIndicatorAutoHidden:(bool)arg1;
- (void)setPrefersStatusBarHidden:(bool)arg1;
- (void)setSupportedOrientations:(unsigned long long)arg1;
- (void)set_webView:(id)arg1;
- (void)showBanner;
- (void)showUI;
- (unsigned long long)supportedInterfaceOrientations;
- (void)videoControlsManagerDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
