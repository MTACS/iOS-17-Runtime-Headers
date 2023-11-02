
@interface PKSectionTableViewController : UITableViewController {
    struct { 
        unsigned long long numberOfSections; 
        unsigned long long *indexToSection; 
        unsigned long long *sectionToIndex; 
    }  _bufferedMap;
    struct { 
        unsigned long long numberOfSections; 
        unsigned long long *indexToSection; 
        unsigned long long *sectionToIndex; 
    }  _currentMap;
    unsigned long long  _numberOfSections;
    bool  _skipSetupForReadableContentGuide;
}

@property (nonatomic) bool skipSetupForReadableContentGuide;

- (bool)_recomputeMappedSections;
- (void)_swapBuffers;
- (void)dealloc;
- (unsigned long long)indexForSection:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;
- (bool)isMappingValid;
- (bool)isSectionMapped:(unsigned long long)arg1;
- (unsigned long long)numberOfMappedSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)recomputeMappedSectionsAndReloadSections:(id)arg1;
- (bool)reloadData;
- (void)reloadRow:(long long)arg1 inSection:(unsigned long long)arg2;
- (void)reloadRows:(id)arg1 inSection:(unsigned long long)arg2;
- (void)reloadSection:(unsigned long long)arg1;
- (void)reloadSections:(id)arg1;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (unsigned long long)sectionForIndex:(unsigned long long)arg1;
- (void)setSkipSetupForReadableContentGuide:(bool)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)skipSetupForReadableContentGuide;
- (void)updateSectionVisibilityAndReloadIfNecessaryForAllSections;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned long long)arg1;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)arg1;
- (void)viewDidLoad;

@end
