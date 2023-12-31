
@interface CKTranscriptGroupHeaderView : UIView {
    UIButton * _actionButton;
    _UIBackdropView * _backdropView;
    CKConversation * _conversation;
    UIView * _separator;
    CNComposeRecipientTextView * _textView;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic, retain) CNComposeRecipientTextView *textView;

- (void).cxx_destruct;
- (id)actionButton;
- (id)backdropView;
- (id)conversation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 conversation:(id)arg2;
- (void)layoutSubviews;
- (id)separator;
- (void)setActionButton:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;

@end
