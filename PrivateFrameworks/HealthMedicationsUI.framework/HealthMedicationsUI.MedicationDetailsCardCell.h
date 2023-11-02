
@interface HealthMedicationsUI.MedicationDetailsCardCell : UICollectionViewListCell {
    void $__lazy_storage_$_captionConstraints;
    void $__lazy_storage_$_captionLabel;
    void $__lazy_storage_$_emptyNotesConstraints;
    void $__lazy_storage_$_notesConstraints;
    void $__lazy_storage_$_notesLabel;
    void $__lazy_storage_$_pillImageConstraints;
    void $__lazy_storage_$_pillImageView;
    void $__lazy_storage_$_separatorView;
    void $__lazy_storage_$_titleLabel;
    void item;
    void pillImageSize;
    void separatorToNoteMargin;
    void titleToPillImageConstraints;
}

- (void).cxx_destruct;
- (void)cellTripleTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
