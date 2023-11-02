
@interface MusicSettingsListItemsViewController : PSListItemsController <MusicSettingsSupportController> {
    NSArray * _allSpecifiers;
    NSString * _stringsTable;
}

@property (nonatomic, copy) NSArray *allSpecifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *stringsTable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allSpecifiers;
- (id)itemsFromParent;
- (void)listItemSelected:(id)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (void)setAllSpecifiers:(id)arg1;
- (void)setStringsTable:(id)arg1;
- (id)stringsTable;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateVisibleSpecifiers;
- (id)valueForMusicCapability:(id)arg1;

@end
