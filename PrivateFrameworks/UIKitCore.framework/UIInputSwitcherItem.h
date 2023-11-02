
@interface UIInputSwitcherItem : NSObject {
    NSString * _identifier;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    id /* block */  _persistentSelectedIndex;
    NSArray * _segmentImages;
    NSArray * _segmentTitles;
    long long  _selectedSegmentIndex;
    UIFont * _subtitleFont;
    UISwitch * _switchControl;
    id /* block */  _switchIsOnBlock;
    id /* block */  _switchToggleBlock;
    UIFont * _titleFont;
    bool  _usesDeviceLanguage;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isSegmentedItem;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) id /* block */ persistentSelectedIndex;
@property (nonatomic, retain) NSArray *segmentImages;
@property (nonatomic, retain) NSArray *segmentTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UISwitch *switchControl;
@property (nonatomic, copy) id /* block */ switchIsOnBlock;
@property (nonatomic, copy) id /* block */ switchToggleBlock;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic) bool usesDeviceLanguage;

+ (id)switcherItemWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isSegmentedItem;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id /* block */)persistentSelectedIndex;
- (id)segmentImages;
- (id)segmentTitles;
- (long long)selectedSegmentIndex;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPersistentSelectedIndex:(id /* block */)arg1;
- (void)setSegmentImages:(id)arg1;
- (void)setSegmentTitles:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSwitchControl:(id)arg1;
- (void)setSwitchIsOnBlock:(id /* block */)arg1;
- (void)setSwitchToggleBlock:(id /* block */)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setUsesDeviceLanguage:(bool)arg1;
- (id)subtitleFont;
- (id)switchControl;
- (id /* block */)switchIsOnBlock;
- (id /* block */)switchToggleBlock;
- (id)titleFont;
- (bool)usesDeviceLanguage;

@end
