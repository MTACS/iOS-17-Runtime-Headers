
@interface PXActivityProgressViewController : UIViewController {
    UIImageView * _checkmarkView;
    NSArray * _contentConstraints;
    double  _fractionCompleted;
    NSArray * _labelConstraints;
    UILabel * _primaryLabel;
    NSString * _primaryText;
    PXRoundProgressView * _progressView;
    UILabel * _secondaryLabel;
    NSString * _secondaryText;
    UIVisualEffectView * _separatorView;
    bool  _showCheckmarkOnCompletion;
}

@property (nonatomic) double fractionCompleted;
@property (nonatomic, retain) NSString *primaryText;
@property (nonatomic, retain) NSString *secondaryText;
@property (nonatomic) bool showCheckmarkOnCompletion;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_checkmarkView;
- (id)_primaryLabel;
- (id)_progressView;
- (id)_secondaryLabel;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;
- (void)_updateViewVisibility;
- (double)fractionCompleted;
- (id)primaryText;
- (void)reset;
- (id)secondaryText;
- (void)setFractionCompleted:(double)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setShowCheckmarkOnCompletion:(bool)arg1;
- (bool)showCheckmarkOnCompletion;
- (void)updateViewConstraints;

@end
