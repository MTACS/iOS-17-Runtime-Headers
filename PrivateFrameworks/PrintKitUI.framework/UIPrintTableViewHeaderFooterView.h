
@interface UIPrintTableViewHeaderFooterView : UITableViewHeaderFooterView {
    UILabel * _label;
    UIActivityIndicatorView * _spinner;
    bool  _spinnerHidden;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSString *messageText;
@property (nonatomic) bool spinSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic) bool spinnerHidden;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)label;
- (id)messageText;
- (void)prepareForReuse;
- (void)setLabel:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)setSpinSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setSpinnerHidden:(bool)arg1;
- (bool)spinSpinner;
- (id)spinner;
- (bool)spinnerHidden;

@end
