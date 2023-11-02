
@interface _UIStatusBarCellularItem : _UIStatusBarItem {
    _UIStatusBarImageView * _callForwardingView;
    bool  _marqueeServiceName;
    _UIStatusBarStringView * _networkTypeView;
    _UIStatusBarStringView * _rawStringView;
    _UIStatusBarStringView * _serviceNameView;
    bool  _showsDisabledSignalBars;
    _UIStatusBarCellularSignalView * _signalView;
    <_UIStatusBarCellularItemTypeStringProvider> * _typeStringProvider;
    _UIStatusBarImageView * _warningView;
}

@property (nonatomic, retain) _UIStatusBarImageView *callForwardingView;
@property (nonatomic, readonly) NSString *cellularDataEntryKey;
@property (nonatomic) bool marqueeServiceName;
@property (nonatomic, retain) _UIStatusBarStringView *networkTypeView;
@property (nonatomic, retain) _UIStatusBarStringView *rawStringView;
@property (nonatomic, retain) _UIStatusBarStringView *serviceNameView;
@property (nonatomic) bool showsDisabledSignalBars;
@property (nonatomic, retain) _UIStatusBarCellularSignalView *signalView;
@property (nonatomic) <_UIStatusBarCellularItemTypeStringProvider> *typeStringProvider;
@property (nonatomic, retain) _UIStatusBarImageView *warningView;

+ (id)callForwardingDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(bool)arg4;
+ (id)nameDisplayIdentifier;
+ (id)rawDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)typeDisplayIdentifier;
+ (id)warningDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;
- (void)_create_callForwardingView;
- (void)_create_networkTypeView;
- (void)_create_rawStringView;
- (void)_create_serviceNameView;
- (void)_create_signalView;
- (void)_create_warningView;
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;
- (bool)_showCallFowardingForEntry:(id)arg1;
- (id)_stringForCellularType:(long long)arg1;
- (bool)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3 forceShowingDisabledSignalBars:(bool)arg4;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)callForwardingView;
- (id)cellularDataEntryKey;
- (id)dependentEntryKeys;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (bool)marqueeServiceName;
- (id)networkTypeView;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)rawStringView;
- (id)serviceNameView;
- (void)setCallForwardingView:(id)arg1;
- (void)setMarqueeServiceName:(bool)arg1;
- (void)setNetworkTypeView:(id)arg1;
- (void)setRawStringView:(id)arg1;
- (void)setServiceNameView:(id)arg1;
- (void)setShowsDisabledSignalBars:(bool)arg1;
- (void)setSignalView:(id)arg1;
- (void)setTypeStringProvider:(id)arg1;
- (void)setWarningView:(id)arg1;
- (void)setmarqueeServiceName:(bool)arg1;
- (bool)showsDisabledSignalBars;
- (id)signalView;
- (id)typeStringProvider;
- (id)viewForIdentifier:(id)arg1;
- (id)warningView;

@end
