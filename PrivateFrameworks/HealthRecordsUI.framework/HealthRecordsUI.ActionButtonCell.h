
@interface HealthRecordsUI.ActionButtonCell : UITableViewCell {
    void actionEnabled;
    void icon;
    void iconView;
    void nonBusyTitleLabelColor;
    void titleLabel;
    void titleLabelLeadingConstraint;
}

@property (nonatomic) bool actionEnabled;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (bool)actionEnabled;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setActionEnabled:(bool)arg1;
- (void)setBusy:(bool)arg1;
- (void)setIcon:(id)arg1;
- (id)titleLabel;

@end
