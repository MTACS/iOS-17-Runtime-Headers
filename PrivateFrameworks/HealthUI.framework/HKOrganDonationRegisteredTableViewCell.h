
@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell {
    UILabel * _introLabel;
    UILabel * _registrarLabel;
}

@property (nonatomic, retain) UILabel *introLabel;
@property (nonatomic, retain) UILabel *registrarLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)introLabel;
- (id)registrarLabel;
- (void)setIntroLabel:(id)arg1;
- (void)setRegistrarLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;

@end
