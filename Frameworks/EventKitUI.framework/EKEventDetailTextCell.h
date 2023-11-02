
@interface EKEventDetailTextCell : EKEventDetailCell {
    bool  _isTruncatingText;
    UITextView * _sizingTextView;
    <EKEventDetailTextCellDelegate> * _textDelegate;
    id /* block */  _textFromEventBlock;
    UILabel * _textTitleView;
    UITextView * _textView;
    NSString * _title;
}

@property (nonatomic, readonly) bool isTruncatingText;
@property (nonatomic) <EKEventDetailTextCellDelegate> *textDelegate;

- (void).cxx_destruct;
- (id)_createNewTextView;
- (double)_layoutForWidth:(double)arg1;
- (id)_sizingTextView;
- (id)_textTitleView;
- (id)_textView;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 title:(id)arg3 textFromEventBlock:(id /* block */)arg4;
- (bool)isTruncatingText;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)setIsTruncatingText:(bool)arg1;
- (void)setTextDelegate:(id)arg1;
- (id)textDelegate;
- (bool)update;

@end
