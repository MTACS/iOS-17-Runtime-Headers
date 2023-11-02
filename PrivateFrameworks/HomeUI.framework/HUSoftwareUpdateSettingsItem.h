
@interface HUSoftwareUpdateSettingsItem : HFItem {
    HMHome * _home;
}

@property (nonatomic, retain) HMHome *home;

+ (id)footerTitleForHome:(id)arg1;

- (void).cxx_destruct;
- (bool)_shouldShowSoftwareUpdateIcon;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)description;
- (id)home;
- (id)initWithHome:(id)arg1;
- (void)setHome:(id)arg1;

@end
