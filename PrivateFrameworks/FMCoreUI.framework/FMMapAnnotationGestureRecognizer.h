
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer {
    <FMMapAnnotationGestureRecognizerDelegate> * _touchDelegate;
}

@property (nonatomic) <FMMapAnnotationGestureRecognizerDelegate> *touchDelegate;

- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)init;
- (void)setTouchDelegate:(id)arg1;
- (id)touchDelegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
