
@interface HKEmergencyCardTableItem : NSObject {
    _HKMedicalIDData * _data;
    bool  _isInEditMode;
    bool  _isSecondaryProfile;
    UIViewController * _owningViewController;
    NSString * _profileFirstName;
    bool  _shouldShowHints;
}

@property (nonatomic, retain) _HKMedicalIDData *data;
@property (nonatomic, readonly) bool isInEditMode;
@property (nonatomic) bool isSecondaryProfile;
@property (nonatomic) UIViewController *owningViewController;
@property (nonatomic, retain) NSString *profileFirstName;
@property (nonatomic) bool shouldShowHints;

- (void).cxx_destruct;
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2;
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2 disabled:(bool)arg3;
- (bool)canEditRowAtIndex:(long long)arg1;
- (void)commitEditing;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (id)data;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (bool)hasPresentableData;
- (id)init;
- (id)initInEditMode:(bool)arg1;
- (bool)isInEditMode;
- (bool)isSecondaryProfile;
- (void)localeDidChange:(id)arg1;
- (long long)numberOfRows;
- (id)owningViewController;
- (id)profileFirstName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setData:(id)arg1;
- (void)setIsSecondaryProfile:(bool)arg1;
- (void)setOwningViewController:(id)arg1;
- (void)setProfileFirstName:(id)arg1;
- (void)setShouldShowHints:(bool)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (bool)shouldShowHints;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (void)timeZoneDidChange:(id)arg1;
- (id)title;
- (id)titleForFooter;
- (id)titleForHeader;

@end
