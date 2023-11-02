
@interface HPSListeningModeControl : PSTableCell {
    bool  _autoANCSupported;
    BluetoothDevice * _device;
    UILabel * _labelAutoANC;
    UILabel * _labelNoiseCancellation;
    UILabel * _labelOff;
    UILabel * _labelTransparency;
    UILabel * _labelUnableToSetListeningMode;
    NSMutableArray * _modeControlLabelXPositionConstraints;
    UISegmentedControl * _segmentedControl;
}

@property (nonatomic, retain) NSMutableArray *modeControlLabelXPositionConstraints;

- (void).cxx_destruct;
- (void)_handleListeningModeSetFailure:(int)arg1 index:(long long)arg2;
- (void)_updateLabelLayoutForBounds;
- (void)addModeLabels;
- (void)addModeOptions;
- (long long)getIndexFromListeningMode:(int)arg1;
- (int)getListeningModeFromIndex:(long long)arg1;
- (id)getListeningModeString:(int)arg1;
- (void)initCommon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)modeControlLabelXPositionConstraints;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)refreshListeningMode;
- (void)segmentControlValueChanged:(id)arg1;
- (void)setModeControlLabelXPositionConstraints:(id)arg1;
- (void)settingsChangedHandler:(id)arg1;
- (void)setupConstraints;

@end
