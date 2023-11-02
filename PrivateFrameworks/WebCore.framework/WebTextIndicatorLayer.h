
@interface WebTextIndicatorLayer : CALayer {
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _bounceLayers;
    bool  _fadingOut;
    bool  _hasCompletedAnimation;
    struct CGSize { 
        double width; 
        double height; 
    }  _margin;
    struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { 
        struct TextIndicator {} *m_ptr; 
    }  _textIndicator;
}

@property (getter=isFadingOut, nonatomic) bool fadingOut;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_animationDuration;
- (bool)hasCompletedAnimation;
- (void)hideWithCompletionHandler:(id /* block */)arg1;
- (bool)indicatorWantsBounce:(const void*)arg1;
- (bool)indicatorWantsManualAnimation:(const void*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textIndicator:(void*)arg2 margin:(struct CGSize { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isFadingOut;
- (void)present;
- (void)setAnimationProgress:(float)arg1;
- (void)setFadingOut:(bool)arg1;

@end
