
@interface HLPHelpLoadingView : UIView {
    UIActivityIndicatorView * _activityIndicatorView;
    <HLPHelpLoadingViewDelegate> * _delegate;
    UIImageView * _errorImageView;
    UILabel * _errorMessageLabel;
    UILabel * _errorTitleLabel;
    bool  _supportsDarkMode;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) <HLPHelpLoadingViewDelegate> *delegate;
@property (nonatomic, retain) UILabel *errorMessageLabel;
@property (nonatomic, retain) UILabel *errorTitleLabel;
@property (nonatomic) bool supportsDarkMode;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (id)delegate;
- (id)errorMessageLabel;
- (id)errorTitleLabel;
- (id)init;
- (void)removeErrorView;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorMessageLabel:(id)arg1;
- (void)setErrorTitleLabel:(id)arg1;
- (void)setSupportsDarkMode:(bool)arg1;
- (void)showActivityIndicator:(bool)arg1;
- (void)showDefaultErrorMessage;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)showHelpBookInfo;
- (void)showNoConnectionErrorMessage;
- (bool)supportsDarkMode;
- (void)updateBackgroundColor;

@end
