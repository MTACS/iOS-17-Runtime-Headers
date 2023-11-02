
@interface MFDimmableButton : UIButton {
    bool  _dimmed;
    bool  _hidesWhenDimmedIfNotSelected;
    bool  _stickyHiddenValue;
}

@property (nonatomic, readonly) unsigned long long autohidePreference;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic) bool hidesWhenDimmedIfNotSelected;
@property (nonatomic) bool stickyHiddenValue;

- (void)_setHidden:(bool)arg1 external:(bool)arg2;
- (void)_updateDimmedHidingIfNecessary;
- (unsigned long long)autohidePreference;
- (bool)hidesWhenDimmedIfNotSelected;
- (bool)isDimmed;
- (void)setDimmed:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidesWhenDimmedIfNotSelected:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStickyHiddenValue:(bool)arg1;
- (unsigned long long)state;
- (bool)stickyHiddenValue;

@end
