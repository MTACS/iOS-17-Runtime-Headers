
@interface HRAtrialFibrillationEducationSection : HKDataMetadataSection {
    bool  _forSinglePlayer;
}

@property (nonatomic, readonly) bool forSinglePlayer;

- (id)_cellTitleForEducationRow:(unsigned long long)arg1;
- (id)_viewControllerForEducationRow:(unsigned long long)arg1;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (bool)forSinglePlayer;
- (id)initForSinglePlayer:(bool)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;

@end
