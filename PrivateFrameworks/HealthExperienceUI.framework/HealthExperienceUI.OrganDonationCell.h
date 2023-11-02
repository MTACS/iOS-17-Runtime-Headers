
@interface HealthExperienceUI.OrganDonationCell : UITableViewCell {
    void item;
    void organDonationLogoImage;
    void subtitle;
    void title;
}

@property (nonatomic) UIImageView *organDonationLogoImage;
@property (nonatomic) UILabel *subtitle;
@property (nonatomic) UILabel *title;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)organDonationLogoImage;
- (void)setOrganDonationLogoImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
