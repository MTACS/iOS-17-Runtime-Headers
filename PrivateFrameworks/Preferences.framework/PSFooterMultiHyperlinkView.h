
@interface PSFooterMultiHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate> {
    NSURL * _URL;
    SEL  _action;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _linkRange;
    NSArray * _linkSpecs;
    NSMutableDictionary * _rangeLinkSpecMap;
    id  _target;
    NSString * _text;
    UITextView * _textView;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) SEL action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property (nonatomic, retain) NSArray *linkSpecs;
@property (readonly) Class superclass;
@property (nonatomic) id target;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (id)URL;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1;
- (void)_addLinkSpec:(id)arg1 toAttrStr:(id)arg2;
- (void)_linkify;
- (SEL)action;
- (id)initWithSpecifier:(id)arg1;
- (bool)isValidLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (id)linkSpecs;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)refreshContentsWithSpecifier:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLinkSpecs:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setupSubviewsAndContstraints;
- (id)target;
- (id)text;
- (id)textView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
