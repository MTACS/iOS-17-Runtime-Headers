
@interface EKUIInviteesViewAvailabilitySection : NSObject <EKUIInviteesViewSection> {
    NSString * _cachedAvailabilityCellReuseIdentifier;
    NSString * _cachedCellReuseIdentifier;
    NSString * _cachedConflictCellReuseIdentifier;
    bool  _checked;
    EKEvent * _event;
    bool  _isForAttendeeProposedTime;
    unsigned long long  _reuseIdentifierVersion;
    id /* block */  _tableViewCellHook;
    id /* block */  _viewAvailabilityTapped;
}

@property (nonatomic, retain) NSString *cachedAvailabilityCellReuseIdentifier;
@property (nonatomic, retain) NSString *cachedCellReuseIdentifier;
@property (nonatomic, retain) NSString *cachedConflictCellReuseIdentifier;
@property (nonatomic) bool checked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForAttendeeProposedTime;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewCellHook;
@property (nonatomic, copy) id /* block */ viewAvailabilityTapped;

- (void).cxx_destruct;
- (id)actionsForRow:(id)arg1;
- (id)cachedAvailabilityCellReuseIdentifier;
- (id)cachedCellReuseIdentifier;
- (id)cachedConflictCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (bool)checked;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)contextMenuDataForIndexPath:(id)arg1 interaction:(id)arg2;
- (id)debugTitle;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (id)event;
- (id)headerTitle;
- (bool)isForAttendeeProposedTime;
- (unsigned long long)numberOfRows;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned long long)reuseIdentifierVersion;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setCachedAvailabilityCellReuseIdentifier:(id)arg1;
- (void)setCachedCellReuseIdentifier:(id)arg1;
- (void)setCachedConflictCellReuseIdentifier:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setIsForAttendeeProposedTime:(bool)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setTableViewCellHook:(id /* block */)arg1;
- (void)setViewAvailabilityTapped:(id /* block */)arg1;
- (bool)supportsContextMenuForIndexPath:(id)arg1;
- (id /* block */)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (id /* block */)viewAvailabilityTapped;

@end
