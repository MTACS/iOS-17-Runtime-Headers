
@interface WKKeyboardScrollingAnimator : NSObject {
    struct FloatPoint { 
        float m_x; 
        float m_y; 
    }  _currentPosition;
    struct optional<WebCore::KeyboardScroll> { 
        union { 
            BOOL __null_state_; 
            struct KeyboardScroll { 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } offset; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } maximumVelocity; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } force; 
                unsigned char granularity; 
                unsigned char direction; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _currentScroll;
    struct RetainPtr<CADisplayLink> { 
        void *m_ptr; 
    }  _displayLink;
    struct FloatPoint { 
        float m_x; 
        float m_y; 
    }  _idealPosition;
    struct FloatPoint { 
        float m_x; 
        float m_y; 
    }  _idealPositionForMinimumTravel;
    bool  _scrollTriggeringKeyIsPressed;
    <WKKeyboardScrollableInternal> * _scrollable;
    struct FloatSize { 
        float m_width; 
        float m_height; 
    }  _velocity;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)beginWithEvent:(id)arg1;
- (void)displayLinkFired:(id)arg1;
- (void)handleKeyEvent:(id)arg1;
- (id)init;
- (id)initWithScrollable:(id)arg1;
- (void)invalidate;
- (struct optional<WebCore::KeyboardScroll> { union { BOOL x_1_1_1; struct KeyboardScroll { struct FloatSize { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; struct FloatSize { float x_3_3_1; float x_3_3_2; } x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; } x_1_1_2; } x1; bool x2; })keyboardScrollForEvent:(id)arg1;
- (bool)scrollTriggeringKeyIsPressed;
- (void)startDisplayLinkIfNeeded;
- (void)stopAnimatedScroll;
- (void)stopDisplayLink;
- (void)stopScrollingImmediately;
- (void)willStartInteractiveScroll;

@end
