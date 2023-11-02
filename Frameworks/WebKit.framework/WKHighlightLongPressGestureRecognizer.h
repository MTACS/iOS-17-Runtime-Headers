
@interface WKHighlightLongPressGestureRecognizer : _UIWebHighlightLongPressGestureRecognizer {
    struct WeakObjCPtr<UIScrollView> { 
        id m_weakReference; 
    }  _lastTouchedScrollView;
}

@property (nonatomic, readonly) UIScrollView *lastTouchedScrollView;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lastTouchedScrollView;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
