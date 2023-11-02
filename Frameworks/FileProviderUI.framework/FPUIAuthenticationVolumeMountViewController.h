
@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController {
    NSArray * _allVolumeRepresentations;
    NSArray * _mountedVolumeIdentifiers;
    NSMutableIndexSet * _selectedVolumesIndexes;
}

- (void).cxx_destruct;
- (bool)_canMoveToNextStep;
- (void)_done:(id)arg1;
- (id)defaultRightBarButtonItem;
- (id)initWithVolumes:(id)arg1 mountedVolumeIdentifiers:(id)arg2;
- (void)selectedVolumesIndexesDidChange;
- (void)setupTableViewSections;
- (id)tableCellCheckmarkImageDisabled;
- (void)viewDidLoad;

@end
