
@interface TFFeedbackFormGroupToggleCell : TFFeedbackFormBaseCell {
    TFFeedbackEntryGroupToggle * _groupToggleEntry;
    UISwitch * _toggleSwitch;
}

@property (nonatomic, retain) TFFeedbackEntryGroupToggle *groupToggleEntry;
@property (nonatomic, readonly) UISwitch *toggleSwitch;

- (void).cxx_destruct;
- (void)applyContentsOfEntry:(id)arg1;
- (void)didUpdateToggleSwitchValue:(id)arg1;
- (unsigned long long)displayableDataType;
- (id)groupToggleEntry;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setDisplayedDataGroupInclusionBool:(bool)arg1;
- (void)setGroupToggleEntry:(id)arg1;
- (id)toggleSwitch;

@end
