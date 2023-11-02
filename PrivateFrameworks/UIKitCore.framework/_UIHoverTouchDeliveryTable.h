
@interface _UIHoverTouchDeliveryTable : NSObject {
    NSMutableSet * _beginningGestureRecognizers;
    NSMutableSet * _exitingGestureRecognizers;
    UITouch * _touch;
    NSMutableSet * _updatingGestureRecognizers;
}

@property (nonatomic, readonly) NSSet *gestureRecognizers;
@property (nonatomic, readonly) UITouch *touch;

- (void).cxx_destruct;
- (void)_cancelAllGestureRecognizers;
- (id)gestureRecognizers;
- (id)initWithTouch:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (id)touch;
- (void)updateForEvent:(id)arg1 forcingHitTest:(bool)arg2;
- (long long)updateGestureRecognizerForDelivery:(id)arg1;

@end
