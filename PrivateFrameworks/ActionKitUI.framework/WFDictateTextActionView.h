
@interface WFDictateTextActionView : UIView {
    <WFDictateTextActionViewDelegate> * _delegate;
    WFDictateTextActionStopButton * _stopButton;
    UITextView * _textView;
}

@property (nonatomic) <WFDictateTextActionViewDelegate> *delegate;
@property (nonatomic) WFDictateTextActionStopButton *stopButton;
@property (nonatomic) UITextView *textView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 padded:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setStopButton:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)stopButton;
- (void)stopButtonTapped;
- (id)textView;
- (void)updateWithTranscription:(id)arg1;

@end
