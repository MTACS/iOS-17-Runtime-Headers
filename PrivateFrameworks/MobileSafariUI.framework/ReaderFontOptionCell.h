
@interface ReaderFontOptionCell : UICollectionViewListCell <_SFSettingsAlertOptionsGroupItemConfiguration> {
    UIView * _accessoryView;
    bool  _enabled;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_listContentConfiguration;
- (void)_updateAccessories;
- (id)accessoryView;
- (id)attributedText;
- (bool)isEnabled;
- (void)setAccessoryView:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
