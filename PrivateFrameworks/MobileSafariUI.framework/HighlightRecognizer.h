
@interface HighlightRecognizer : UIGestureRecognizer {
    SEL  _highlightAction;
    id  _highlightTarget;
    unsigned long long  _numberOfTouches;
}

@property (nonatomic) SEL highlightAction;
@property (nonatomic) id highlightTarget;

- (void).cxx_destruct;
- (SEL)highlightAction;
- (id)highlightTarget;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)numberOfTouches;
- (void)reset;
- (void)setHighlightAction:(SEL)arg1;
- (void)setHighlightTarget:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
