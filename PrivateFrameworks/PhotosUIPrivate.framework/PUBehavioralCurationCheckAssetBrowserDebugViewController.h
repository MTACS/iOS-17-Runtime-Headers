
@interface PUBehavioralCurationCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSPredicate * _predicate;
    UIPickerView * _scorePickerView;
    NSString * _selectionName;
    bool  _sortAscending;
    UIPickerView * _sortPickerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneEditingSettings:(id)arg1;
- (void)_editSettings:(id)arg1;
- (id)_goldAssetUUIDs;
- (void)_update;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)newToolbarItems;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)phScoreKeyPathsForSelectionName:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)predicateForSelectionName:(id)arg1;
- (id)selectionNames;
- (double)semanticScoreFromBehavioralScore:(double)arg1;
- (bool)shouldShowToolbar;
- (id)sortDescriptorForSelectionName:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
