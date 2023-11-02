
@interface EKCalendarValidateEditItem : EKCalendarButtonEditItem {
    bool  _URLIsSpam;
    bool  _animateSpinner;
    UILabel * _buttonTextLabel;
    NSString * _buttonTitle;
    UITableViewCell * _cell;
    bool  _showError;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic) bool URLIsSpam;
@property (nonatomic) bool animateSpinner;
@property (nonatomic) bool showError;

- (void).cxx_destruct;
- (bool)URLIsSpam;
- (bool)animateSpinner;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)footerTitle;
- (id)init;
- (void)setAnimateSpinner:(bool)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setShowError:(bool)arg1;
- (void)setURLIsSpam:(bool)arg1;
- (bool)showError;

@end
