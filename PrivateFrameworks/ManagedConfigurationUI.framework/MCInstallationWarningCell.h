
@interface MCInstallationWarningCell : UITableViewCell {
    NSArray * _constraints;
    UILabel * _warningLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UILabel *warningLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setup;
- (void)_setupConstraints;
- (id)constraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setConstraints:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setWarningLabel:(id)arg1;
- (id)warningLabel;

@end
