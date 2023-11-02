
@interface HealthRecordsUI.MedicalRecordTimelineAccountUpgradeTileItemCell : UICollectionViewListCell {
    void hasRegisteredForNotifications;
    void item;
    void tileView;
}

@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;

- (void).cxx_destruct;
- (id)_bridgedConfigurationState;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (void)dismissAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reloadDataSource;
- (void)upgradeAction;

@end
