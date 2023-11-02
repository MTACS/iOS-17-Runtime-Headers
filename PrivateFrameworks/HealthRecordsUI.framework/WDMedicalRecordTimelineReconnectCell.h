
@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell {
    HKDynamicButton * _reconnectButton;
}

@property (nonatomic, retain) HKDynamicButton *reconnectButton;

- (void).cxx_destruct;
- (void)_updateBasedOnAccessibilityCategory:(bool)arg1;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)prepareForReuse;
- (id)reconnectButton;
- (void)setReconnectButton:(id)arg1;
- (void)setUpConstraints;
- (void)setupSubviews;

@end
