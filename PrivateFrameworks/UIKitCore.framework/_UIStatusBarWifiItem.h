
@interface _UIStatusBarWifiItem : _UIStatusBarItem {
    _UIStatusBarImageView * _networkIconView;
    _UIStatusBarStringView * _rawStringView;
    _UIStatusBarWifiSignalView * _signalView;
}

@property (nonatomic, retain) _UIStatusBarImageView *networkIconView;
@property (nonatomic, retain) _UIStatusBarStringView *rawStringView;
@property (nonatomic, retain) _UIStatusBarWifiSignalView *signalView;

+ (id)groupWithPriority:(long long)arg1;
+ (id)iconDisplayIdentifier;
+ (id)rawDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;
- (long long)_barCountForUpdate:(id)arg1;
- (double)_barThicknessForUpdate:(id)arg1;
- (void)_create_networkIconView;
- (void)_create_rawStringView;
- (void)_create_signalView;
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;
- (double)_interspaceForUpdate:(id)arg1;
- (double)_totalWidthForUpdate:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)networkIconView;
- (id)rawStringView;
- (void)setNetworkIconView:(id)arg1;
- (void)setRawStringView:(id)arg1;
- (void)setSignalView:(id)arg1;
- (id)signalView;
- (id)viewForIdentifier:(id)arg1;

@end
