
@interface AVTTouchDownGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    bool  _allowsTouchesToPassThrough;
    NSHashTable * _recognizersRequiredToFail;
}

@property (nonatomic) bool allowsTouchesToPassThrough;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *recognizersRequiredToFail;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configure;
- (bool)allowsTouchesToPassThrough;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)recognizersRequiredToFail;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)setAllowsTouchesToPassThrough:(bool)arg1;
- (void)setRecognizersRequiredToFail:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
