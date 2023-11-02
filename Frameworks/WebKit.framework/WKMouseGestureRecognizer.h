
@interface WKMouseGestureRecognizer : UIHoverGestureRecognizer <_UIHoverEventRespondable> {
    bool  _cancelledOrExited;
    struct RetainPtr<UIEvent> { 
        void *m_ptr; 
    }  _currentHoverEvent;
    struct RetainPtr<UITouch> { 
        void *m_ptr; 
    }  _currentTouch;
    struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> { 
        struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>> { 
            struct NativeWebMouseEvent {} *__value_; 
        } __ptr_; 
    }  _lastEvent;
    struct optional<CGPoint> { 
        union { 
            BOOL __null_state_; 
            struct CGPoint { 
                double x; 
                double y; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _lastLocation;
    struct optional<long> { 
        union { 
            BOOL __null_state_; 
            long long __val_; 
        } ; 
        bool __engaged_; 
    }  _pressedButtonMask;
    bool  _touching;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>> { struct NativeWebMouseEvent {} *x_1_1_1; } x1; })createMouseEventWithType:(BOOL)arg1 wasCancelled:(bool)arg2;
- (struct optional<CGPoint> { union { BOOL x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; })lastMouseLocation;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)mouseTouch;
- (void)reset;
- (void)setEnabled:(bool)arg1;
- (struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::default_delete<WebKit::NativeWebMouseEvent>> { struct NativeWebMouseEvent {} *x_1_1_1; } x1; })takeLastMouseEvent;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
