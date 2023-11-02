
@interface VideosUI.OfferCardCollectionViewCell : VUIFloatingCollectionViewCell <VUIRentalExpirationLabelDelegate> {
    void belowCardTextLabel;
    void offerView;
    void viewLayout;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_prepareForReuse;

@end
