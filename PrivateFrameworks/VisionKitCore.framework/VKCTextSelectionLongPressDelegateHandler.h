
@interface VKCTextSelectionLongPressDelegateHandler : NSObject <UIGestureRecognizerDelegate> {
    <VKCTextSelectionLongPressHandlerDelegate> * _delegate;
    UIGestureRecognizer * _gestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKCTextSelectionLongPressHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;

@end
