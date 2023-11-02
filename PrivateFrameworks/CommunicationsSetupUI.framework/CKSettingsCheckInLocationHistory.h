
@interface CKSettingsCheckInLocationHistory : PSListController {
    PSSpecifier * _fullLocationHistoryDevices;
    PSSpecifier * _fullLocationHistoryMap;
    PSSpecifier * _fullLocationHistorySelector;
    PSSpecifier * _noLocationHistoryDevices;
    PSSpecifier * _noLocationHistoryMap;
    PSSpecifier * _noLocationHistorySelector;
    PSSpecifier * _sampleDevicesDataGroup;
    PSSpecifier * _sampleMapDataGroup;
    PSSpecifier * _selectionGroup;
}

@property (retain) PSSpecifier *fullLocationHistoryDevices;
@property (retain) PSSpecifier *fullLocationHistoryMap;
@property (retain) PSSpecifier *fullLocationHistorySelector;
@property (retain) PSSpecifier *noLocationHistoryDevices;
@property (retain) PSSpecifier *noLocationHistoryMap;
@property (retain) PSSpecifier *noLocationHistorySelector;
@property (retain) PSSpecifier *sampleDevicesDataGroup;
@property (retain) PSSpecifier *sampleMapDataGroup;
@property (retain) PSSpecifier *selectionGroup;

- (void).cxx_destruct;
- (id)fullLocationHistoryDevices;
- (id)fullLocationHistoryMap;
- (id)fullLocationHistorySelector;
- (id)getSelectionGroupFooterText;
- (id)init;
- (id)noLocationHistoryDevices;
- (id)noLocationHistoryMap;
- (id)noLocationHistorySelector;
- (id)sampleDevicesDataGroup;
- (id)sampleDevicesDataSpecifier;
- (id)sampleMapDataGroup;
- (id)sampleMapDataSpecifier;
- (id)selectionGroup;
- (void)setFullLocationHistoryDevices:(id)arg1;
- (void)setFullLocationHistoryMap:(id)arg1;
- (void)setFullLocationHistorySelector:(id)arg1;
- (void)setNoLocationHistoryDevices:(id)arg1;
- (void)setNoLocationHistoryMap:(id)arg1;
- (void)setNoLocationHistorySelector:(id)arg1;
- (void)setSampleDevicesDataGroup:(id)arg1;
- (void)setSampleMapDataGroup:(id)arg1;
- (void)setSelectionGroup:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSampleDataSpecifiersAnimated:(bool)arg1;

@end
