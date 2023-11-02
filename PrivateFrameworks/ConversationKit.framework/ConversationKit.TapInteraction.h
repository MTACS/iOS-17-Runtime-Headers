
@interface ConversationKit.TapInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    void tapGestureRecognizer;
    void view;
}

@property (nonatomic) long long numberOfTapsRequired;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleRecognizer:(id)arg1;
- (id)init;
- (long long)numberOfTapsRequired;
- (void)setNumberOfTapsRequired:(long long)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end