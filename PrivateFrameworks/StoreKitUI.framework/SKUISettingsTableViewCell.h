
@interface SKUISettingsTableViewCell : UITableViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIImageView * _disclosureChevron;
    bool  _hasDisclosureChevron;
    SKUISettingDescriptionView * _settingDescriptionView;
}

@property (nonatomic, readonly) SKUISettingDescriptionView *settingDescriptionView;

- (void).cxx_destruct;
- (void)displaySettingDescriptionView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (id)settingDescriptionView;

@end
