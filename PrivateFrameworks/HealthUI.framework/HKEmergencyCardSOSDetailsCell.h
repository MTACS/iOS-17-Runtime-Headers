
@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate> {
    NSAttributedString * _footerAttributedText;
    UITextView * _footerTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSAttributedString *footerAttributedText;
@property (nonatomic, retain) UITextView *footerTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setupConstraints;
- (void)_setupViews;
- (void)_updateText;
- (id)footerAttributedText;
- (id)footerTextView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFooterAttributedText:(id)arg1;
- (void)setFooterTextView:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)tintColorDidChange;

@end
