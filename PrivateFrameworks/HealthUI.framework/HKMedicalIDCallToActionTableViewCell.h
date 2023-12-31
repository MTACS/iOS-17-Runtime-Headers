
@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell {
    UIButton * _actionButton;
    UILabel * _callToActionLabel;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) UILabel *callToActionLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)actionButton;
- (id)callToActionLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setActionButton:(id)arg1;
- (void)setCallToActionLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;

@end
