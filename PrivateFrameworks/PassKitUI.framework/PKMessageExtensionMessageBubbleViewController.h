
@interface PKMessageExtensionMessageBubbleViewController : UIViewController {
    PKMessageExtensionMessageBubbleView * _bubbleView;
    <PKMessageExtensionMessageBubbleViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) PKMessageExtensionMessageBubbleView *bubbleView;

- (void).cxx_destruct;
- (id)bubbleView;
- (void)didDoubleTapMessage;
- (void)didLongPressMessage;
- (void)didTapMessage;
- (double)heightThatFitsWidth:(double)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setBubbleView:(id)arg1;
- (void)viewDidLoad;

@end
