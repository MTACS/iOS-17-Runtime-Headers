
@interface WFTextScrollView : UIScrollView <UITextViewDelegate> {
    bool  _adjustmentEnabled;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRange;
    UITextView * _textView;
    NSObject<UITextViewDelegate> * _textViewDelegate;
}

@property (getter=isAdjustmentEnabled, nonatomic) bool adjustmentEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic) NSObject<UITextViewDelegate> *textViewDelegate;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAdjustmentEnabled;
- (bool)isFirstResponder;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)resignFirstResponder;
- (bool)respondsToSelector:(SEL)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setAdjustmentEnabled:(bool)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextViewDelegate:(id)arg1;
- (void)textUpdated;
- (id)textView;
- (id)textViewDelegate;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end
