
@interface UIScrollViewKnobLongPressGestureRecognizer : UILongPressGestureRecognizer {
    bool  _forPointer;
}

@property (nonatomic) bool forPointer;

- (bool)_isGestureType:(long long)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (bool)forPointer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setForPointer:(bool)arg1;

@end
