
@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController <HKAdaptiveModalPresented, HKHeartbeatSequenceListMetadataSectionDelegate> {
    <HKDataMetadataViewControllerDelegate> * _delegate;
    HKCategorySample * _event;
    bool  _firstViewDidLayoutSubviews;
    NSMutableArray * _sections;
}

@property (nonatomic) <HKDataMetadataViewControllerDelegate> *delegate;
@property (nonatomic, retain) HKCategorySample *event;
@property (nonatomic) bool firstViewDidLayoutSubviews;
@property (nonatomic, retain) NSMutableArray *sections;

- (void).cxx_destruct;
- (bool)_addSectionIfNonNull:(id)arg1;
- (id)_atrialFibrillationEducationContainerView;
- (void)_loadSections;
- (void)_reloadAtrialFibrillationEducationTableHeaderView;
- (id)_shortVersionNumberFromString:(id)arg1;
- (id)delegate;
- (id)event;
- (bool)firstViewDidLayoutSubviews;
- (void)heartbeatSequecesListQueryComplete:(id)arg1;
- (id)initWithEvent:(id)arg1 delegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setFirstViewDidLayoutSubviews:(bool)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
