
@interface HKObjectPickerNoDataTableViewCell : UITableViewCell {
    UILabel * _label;
    UIButton * _learnMoreButton;
    bool  _showLearnMoreButton;
    UIStackView * _stackView;
}

@property (nonatomic, retain) NSString *explanationText;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIButton *learnMoreButton;
@property (nonatomic) bool showLearnMoreButton;
@property (nonatomic, retain) UIStackView *stackView;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)explanationText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (id)learnMoreButton;
- (void)prepareForReuse;
- (void)setExplanationText:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setShowLearnMoreButton:(bool)arg1;
- (void)setStackView:(id)arg1;
- (bool)showLearnMoreButton;
- (id)stackView;

@end
