
@interface HealthMedicationsUI.MedicationListItemCell : UICollectionViewListCell {
    void $__lazy_storage_$_disclosureIndicator;
    void $__lazy_storage_$_itemsStackView;
    void $__lazy_storage_$_minHeightConstraint;
    void $__lazy_storage_$_pillImageView;
    void $__lazy_storage_$_primaryLabel;
    void activeConstraints;
    void item;
}

@property (nonatomic, retain) UIStackView *itemsStackView;
@property (nonatomic, retain) _TtC27HealthMedicationsExperience14MedicationView *pillImageView;
@property (nonatomic, retain) UILabel *primaryLabel;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemsStackView;
- (id)pillImageView;
- (id)primaryLabel;
- (void)setItemsStackView:(id)arg1;
- (void)setPillImageView:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;

@end
