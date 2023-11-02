
@interface SBHPageManagementListTapGestureRecognizer : UIGestureRecognizer {
    UITouch * _activeTouch;
}

@property (nonatomic, retain) UITouch *activeTouch;

- (void).cxx_destruct;
- (id)activeTouch;
- (void)reset;
- (void)setActiveTouch:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
