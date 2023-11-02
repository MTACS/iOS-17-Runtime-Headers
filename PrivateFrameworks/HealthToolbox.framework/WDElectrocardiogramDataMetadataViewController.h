
@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKAdaptiveModalPresented, HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate> {
    bool  _actionsEnabled;
    long long  _activeAlgorithmVersion;
    <HKDataMetadataViewControllerDelegate> * _delegate;
    bool  _firstViewDidLayoutSubviews;
    long long  _mode;
    WDElectrocardiogramReportDataSource * _reportDataSource;
    HRElectrocardiogramReportGenerator * _reportGenerator;
    HKElectrocardiogram * _sample;
    NSMutableArray * _sections;
}

@property (nonatomic) bool actionsEnabled;
@property (nonatomic, readonly) long long activeAlgorithmVersion;
@property (nonatomic) <HKDataMetadataViewControllerDelegate> *delegate;
@property (nonatomic) bool firstViewDidLayoutSubviews;
@property (nonatomic) long long mode;
@property (nonatomic, retain) WDElectrocardiogramReportDataSource *reportDataSource;
@property (nonatomic, retain) HRElectrocardiogramReportGenerator *reportGenerator;
@property (nonatomic, retain) HKElectrocardiogram *sample;
@property (nonatomic, retain) NSMutableArray *sections;

- (void).cxx_destruct;
- (bool)_addSectionIfNonNull:(id)arg1;
- (id)_electrocardiogramMetadataContainerView;
- (long long)_fetchActiveAlgorithmVersionWithHealthStore:(id)arg1;
- (void)_loadSections;
- (void)_localeOrDisplayTypeChange:(id)arg1;
- (void)_reloadElectrocardiogramMetadataTableHeaderView;
- (id)accessibilityIdentifier;
- (bool)actionsEnabled;
- (long long)activeAlgorithmVersion;
- (void)dealloc;
- (id)delegate;
- (void)deleteSampleTriggeredBySection:(id)arg1;
- (void)deletionSectionDidSelectRow:(id)arg1;
- (id)electrocardiogramMetadataView:(id)arg1 regulatedBodyTextForSample:(id)arg2;
- (void)electrocardiogramMetadataViewDidSelectShareRow:(id)arg1;
- (void)electrocardiogramMetadataViewDidTapDetailButton:(id)arg1;
- (bool)electrocardiogramMetadataViewShouldShowShareRow:(id)arg1;
- (id)featureVersionFromUpdateVersion:(id)arg1;
- (bool)firstViewDidLayoutSubviews;
- (id)identifierBundle;
- (id)initWithSample:(id)arg1 delegate:(id)arg2 mode:(long long)arg3 activeAlgorithmVersion:(id)arg4;
- (long long)mode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentPDFViewController;
- (id)reportDataSource;
- (id)reportGenerator;
- (id)sample;
- (long long)sampleAlgorithmVersion;
- (id)sections;
- (void)setActionsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstViewDidLayoutSubviews:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setReportDataSource:(id)arg1;
- (void)setReportGenerator:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setSections:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
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
