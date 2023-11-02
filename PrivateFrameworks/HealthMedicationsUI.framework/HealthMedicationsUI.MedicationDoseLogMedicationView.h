
@interface HealthMedicationsUI.MedicationDoseLogMedicationView : UIView {
    void $__lazy_storage_$_dividerView;
    void $__lazy_storage_$_doseAmountTimeButton;
    void $__lazy_storage_$_formStrengthLabel;
    void $__lazy_storage_$_lowerSectionStackView;
    void $__lazy_storage_$_lowerSectionStackViewWithNotes;
    void $__lazy_storage_$_medicationNameLabel;
    void $__lazy_storage_$_medicationStackView;
    void $__lazy_storage_$_medmojiImageView;
    void $__lazy_storage_$_notesLabel;
    void $__lazy_storage_$_skippedButton;
    void $__lazy_storage_$_skippedTakenStackView;
    void $__lazy_storage_$_takenButton;
    void $__lazy_storage_$_timeFormatter;
    void contentView;
    void logDelegate;
    void viewModel;
}

- (void).cxx_destruct;
- (void)didTapRecord:(id)arg1;
- (void)didTapSkip:(id)arg1;
- (void)didTapUnitTime:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
