
@interface _UIDragLiftGestureRecognizer : UILongPressGestureRecognizer {
    bool  _isForPointer;
}

@property (getter=_isForPointer, nonatomic) bool isForPointer;

- (bool)_isForPointer;
- (void)setIsForPointer:(bool)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
