
@interface PXDiagnosticsHighlightCurationSettingsViewController : UIViewController {
    UISwitch * _allowAdaptiveForSemanticalDedupingSwitch;
    <PXDiagnosticsHighlightCurationSettingsViewControllerDelegate> * _delegate;
    UISwitch * _doDejunkSwitch;
    UISwitch * _doFinalPassSwitch;
    UISwitch * _doIdenticalDedupingSwitch;
    UISwitch * _doNotDedupeInterestingPortraitsAndLivePicturesSwitch;
    UISwitch * _doNotDedupeVideosSwitch;
    UISwitch * _doNotSemanticallyDedupePeopleSwitch;
    UISwitch * _doNotSemanticallyDedupePersonsSwitch;
    UISwitch * _doSemanticalDedupingSwitch;
    UITextField * _finalPassDedupingThresholdTextField;
    UITextField * _finalPassMaximumTimeGroupExtensionTextField;
    UITextField * _finalPassTimeIntervalTextField;
    UITextField * _identicalDedupingFaceprintDistanceTextField;
    UITextField * _identicalDedupingMaximumTimeGroupExtensionTextField;
    UITextField * _identicalDedupingThresholdForBestItemsTextField;
    UITextField * _identicalDedupingThresholdForPeopleTextField;
    UITextField * _identicalDedupingThresholdTextField;
    UITextField * _identicalDedupingTimeIntervalForPeopleTextField;
    UITextField * _identicalDedupingTimeIntervalTextField;
    UITextField * _maximumNumberOfItemsPerIdenticalClusterTextField;
    UITextField * _maximumNumberOfItemsPerSemanticalClusterTextField;
    UISwitch * _onlyDedupeContiguousItemsSwitch;
    NSDictionary * _options;
    UISwitch * _returnDedupedJunkIfOnlyJunkSwitch;
    UITextField * _semanticalDedupingMaximumTimeGroupExtensionTextField;
    UITextField * _semanticalDedupingThresholdForPeopleTextField;
    UITextField * _semanticalDedupingThresholdForPersonsTextField;
    UITextField * _semanticalDedupingThresholdTextField;
    UITextField * _semanticalDedupingTimeIntervalForPeopleTextField;
    UITextField * _semanticalDedupingTimeIntervalForPersonsTextField;
    UITextField * _semanticalDedupingTimeIntervalTextField;
    UISwitch * _useAllPersonsForDedupingSwitch;
    UISwitch * _useFaceQualityForElectionSwitch;
    UISwitch * _useFaceprintsForIdenticalDedupingSwitch;
    UISwitch * _useOnlyScenesForDedupingSwitch;
}

@property (nonatomic, retain) NSDictionary *options;

- (void).cxx_destruct;
- (void)_applySettingsGlobally:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_resetSettings:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)loadView;
- (id)options;
- (void)setOptions:(id)arg1;
- (void)viewDidLoad;

@end
