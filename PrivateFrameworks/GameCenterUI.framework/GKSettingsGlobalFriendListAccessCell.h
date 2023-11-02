
@interface GKSettingsGlobalFriendListAccessCell : PSSwitchTableCell {
    PSSpecifier * _specfier;
}

@property (nonatomic) PSSpecifier *specfier;

- (void).cxx_destruct;
- (bool)canReload;
- (void)controlChanged:(id)arg1;
- (id)getSwitch;
- (bool)globalFriendListAccess;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setSpecfier:(id)arg1;
- (id)specfier;

@end
