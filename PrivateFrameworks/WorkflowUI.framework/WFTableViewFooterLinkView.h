
@interface WFTableViewFooterLinkView : UITableViewHeaderFooterView <UITextViewDelegate> {
    NSURL * _URL;
    <WFTableViewFooterLinkViewDelegate> * _delegate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _linkRange;
    NSString * _text;
    UITextView * _textView;
}

@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTableViewFooterLinkViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) UITextView *textView;

- (void).cxx_destruct;
- (id)URL;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1 URL:(id)arg2;
- (void)setText:(id)arg1 URL:(id)arg2 linkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)text;
- (id)textView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)tintColorDidChange;
- (void)updateLinkColor;

@end
