
@interface ActiveDeviceLinkCell : PSTableCell {
    NSLayoutConstraint * _detailsHeightContraint;
    UILabel * _detailsLabel;
    UILabel * _deviceNameLabel;
    UILabel * _fromLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *detailsHeightContraint;
@property (nonatomic, retain) UILabel *detailsLabel;
@property (nonatomic, retain) UILabel *deviceNameLabel;
@property (nonatomic, retain) UILabel *fromLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (id)detailsHeightContraint;
- (id)detailsLabel;
- (id)deviceNameLabel;
- (id)fromLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDetailsHeightContraint:(id)arg1;
- (void)setDetailsLabel:(id)arg1;
- (void)setDeviceNameLabel:(id)arg1;
- (void)setFromLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;

@end
