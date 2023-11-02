
@interface HKEmergencyCardFooterCell : UITableViewCell <UITextViewDelegate> {
    UITextView * _footerTextView;
    NSAttributedString * _footerTextViewString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextView *footerTextView;
@property (nonatomic, retain) NSAttributedString *footerTextViewString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateTextColor;
- (id)footerTextView;
- (id)footerTextViewString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFooterText:(id)arg1;
- (void)setFooterTextView:(id)arg1;
- (void)setFooterTextViewString:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)tintColorDidChange;

@end
