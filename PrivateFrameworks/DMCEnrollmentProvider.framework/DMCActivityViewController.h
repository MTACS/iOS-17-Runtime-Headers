
@interface DMCActivityViewController : DMCEnrollmentTemplateTableViewController {
    NSString * _activityText;
    bool  _showBottomView;
    UIActivityIndicatorView * _spinnerView;
    UILabel * _textLabel;
}

@property (nonatomic, retain) NSString *activityText;
@property (nonatomic) bool showBottomView;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (id)_textFont;
- (id)activityText;
- (id)initWithActivityText:(id)arg1 showBottomView:(bool)arg2;
- (void)setActivityText:(id)arg1;
- (void)setShowBottomView:(bool)arg1;
- (void)setSpinnerView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (bool)showBottomView;
- (id)spinnerView;
- (id)textLabel;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
