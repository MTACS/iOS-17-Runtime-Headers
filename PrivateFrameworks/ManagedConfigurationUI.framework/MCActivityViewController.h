
@interface MCActivityViewController : UIViewController {
    UIImageView * _completionIconImageView;
    NSString * _completionText;
    NSString * _inProgresText;
    bool  _isInProgress;
    UILabel * _longWaitingWarningLabel;
    NSString * _longWaitingWarningText;
    double  _longWaitingWarningThreshold;
    UIActivityIndicatorView * _spinnerView;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UIImageView *completionIconImageView;
@property (nonatomic, retain) NSString *completionText;
@property (nonatomic, retain) NSString *inProgresText;
@property (nonatomic) bool isInProgress;
@property (nonatomic, retain) UILabel *longWaitingWarningLabel;
@property (nonatomic, retain) NSString *longWaitingWarningText;
@property (nonatomic) double longWaitingWarningThreshold;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_scheduleLongWaitingWarning;
- (void)completeActivityAnimated:(bool)arg1;
- (id)completionIconImageView;
- (id)completionText;
- (id)inProgresText;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isInProgress;
- (void)loadView;
- (id)longWaitingWarningLabel;
- (id)longWaitingWarningText;
- (double)longWaitingWarningThreshold;
- (void)setCompletionIconImageView:(id)arg1;
- (void)setCompletionText:(id)arg1;
- (void)setInProgresText:(id)arg1;
- (void)setIsInProgress:(bool)arg1;
- (void)setLongWaitingWarningLabel:(id)arg1;
- (void)setLongWaitingWarningText:(id)arg1;
- (void)setLongWaitingWarningThreshold:(double)arg1;
- (void)setSpinnerView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)spinnerView;
- (id)textLabel;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
