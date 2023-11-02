
@interface HKDataMetadataViewController : HKTableViewController <HKAdaptiveModalPresented, HKDataMetadataReportAccessDelegate, HKDataMetadataSubsampleDelegate> {
    <HKDataMetadataViewControllerDelegate> * _delegate;
    HKLocationFetcher * _locationFetcher;
    HKLocationReadings * _locationReadings;
    <HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> * _regulatedFeatureInfoProvider;
    HKSample * _sample;
    NSMutableArray * _sections;
    NSArray * _subSampleTypes;
    HKDataMetadataWorkoutRouteSection * _workoutRouteSection;
}

@property (nonatomic, readonly) <HKDataMetadataViewControllerDelegate> *delegate;
@property (nonatomic, retain) HKLocationFetcher *locationFetcher;
@property (nonatomic, retain) HKLocationReadings *locationReadings;
@property (nonatomic, retain) <HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> *regulatedFeatureInfoProvider;
@property (nonatomic, retain) HKSample *sample;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic, readonly) NSArray *subSampleTypes;
@property (nonatomic, retain) HKDataMetadataWorkoutRouteSection *workoutRouteSection;

- (void).cxx_destruct;
- (bool)_addSectionIfNonNull:(id)arg1;
- (void)_addWorkoutRouteSection;
- (struct CGSize { double x1; double x2; })_adjustedTableViewSize;
- (void)_exportButtonAction:(id)arg1;
- (void)_fetchRoutesWithSamplesHandler:(id /* block */)arg1;
- (void)_fetchSubSampleTypes;
- (void)_fetchWorkoutRouteLocations;
- (void)_loadSections;
- (void)_localeOrDisplayTypeChange:(id)arg1;
- (void)_updateSubSampleTypes:(id)arg1 error:(id)arg2;
- (void)_updateWorkoutRouteSize;
- (id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
- (void)dealloc;
- (id)defaultPredicateForSampleType:(id)arg1;
- (id)delegate;
- (void)finishedAggregateQuery;
- (id)initWithSample:(id)arg1 usingInsetStyling:(bool)arg2 profileName:(id)arg3 delegate:(id)arg4;
- (id)initWithSample:(id)arg1 usingInsetStyling:(bool)arg2 profileName:(id)arg3 regulatedFeatureInfoProvider:(id)arg4 delegate:(id)arg5;
- (id)locationFetcher;
- (id)locationReadings;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)regulatedFeatureInfoProvider;
- (id)sample;
- (id)sections;
- (void)setLocationFetcher:(id)arg1;
- (void)setLocationReadings:(id)arg1;
- (void)setRegulatedFeatureInfoProvider:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setWorkoutRouteSection:(id)arg1;
- (id)subSampleTypes;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewControllerDidLeaveAdaptiveModal;
- (id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)workoutRouteSection;

@end
