
@interface WDSubtitleDateTableViewCell : UITableViewCell {
    NSLayoutConstraint * _baselineConstraint;
    UILabel * _dateTextLabel;
    UILabel * _mainTextLabel;
    UILabel * _subtitleTextLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *baselineConstraint;
@property (nonatomic, retain) UILabel *dateTextLabel;
@property (nonatomic, retain) UILabel *mainTextLabel;
@property (nonatomic, retain) UILabel *subtitleTextLabel;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)baselineConstraint;
- (id)dateTextLabel;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)mainTextLabel;
- (void)setBaselineConstraint:(id)arg1;
- (void)setDateTextLabel:(id)arg1;
- (void)setMainTextLabel:(id)arg1;
- (void)setSubtitleTextLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)subtitleTextLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
