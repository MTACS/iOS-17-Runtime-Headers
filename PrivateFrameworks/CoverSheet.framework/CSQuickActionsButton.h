
@interface CSQuickActionsButton : UICoverSheetButton {
    _UILegibilitySettings * _legibilitySettings;
    bool  _permitted;
    long long  _type;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) bool permitted;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)_accessoryTitleForType;
- (id)_buttonImageNameForSelected:(bool)arg1;
- (id)_imageWithName:(id)arg1;
- (id)_statisticsIdentifierForType;
- (void)_updateStyle;
- (id)initWithType:(long long)arg1;
- (id)legibilitySettings;
- (bool)permitted;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPermitted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
