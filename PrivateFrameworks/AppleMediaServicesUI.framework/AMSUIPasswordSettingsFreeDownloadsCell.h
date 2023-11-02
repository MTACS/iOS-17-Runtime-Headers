
@interface AMSUIPasswordSettingsFreeDownloadsCell : UITableViewCell {
    <AMSUIPasswordSettingsFreeDownloadsCellDelegate> * _delegate;
    UISwitch * _toggle;
}

@property (nonatomic) <AMSUIPasswordSettingsFreeDownloadsCellDelegate> *delegate;
@property (nonatomic, retain) UISwitch *toggle;

- (void).cxx_destruct;
- (void)_setup;
- (void)_toggleChanged:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)selectionStyle;
- (void)setDelegate:(id)arg1;
- (void)setToggle:(id)arg1;
- (id)toggle;

@end
