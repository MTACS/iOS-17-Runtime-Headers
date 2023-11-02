
@interface TFLinkableHeaderFooterView : UITableViewHeaderFooterView {
    bool  _isHeader;
    UITextView * _textView;
}

@property (nonatomic) bool isHeader;
@property (nonatomic, readonly) UITextView *textView;

+ (double)_heightForTextViewWithText:(id)arg1 font:(id)arg2 isHeader:(bool)arg3 fittingWidth:(double)arg4 inTraitEnvironment:(id)arg5;
+ (struct CGSize { double x1; double x2; })itemSizeWithText:(id)arg1 isHeader:(bool)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3 inTraitEnvironment:(id)arg4;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_updateTextViewWithLinkMap:(id)arg1;
- (void)applyText:(id)arg1 withTextLinkMap:(id)arg2 isHeader:(bool)arg3;
- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isHeader;
- (void)layoutSubviews;
- (void)setIsHeader:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textView;
- (void)traitCollectionDidChange:(id)arg1;

@end
