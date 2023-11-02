
@interface PosterBoard.AmbientCollectionViewCell : UICollectionViewCell <PRUISAmbientPosterViewControllerDelegate, PosterBoard.AmbientEditingCollectionViewControllerObserver> {
    void PHOTOS_PROVIDER_BUNDLE_IDENTIFIER;
    void alphaForHiddenPoster;
    void ambientPosterViewController;
    void buttonDistanceFromCellEdge;
    void buttonDistanceFromCellTop;
    void delegate;
    void editingButton;
    void editingButtonOffset;
    void editingViewController;
    void hideOrDeleteButton;
    void hideOrDeleteButtonSize;
    void posterCornerRadius;
    void posterModel;
    void scaleInLayout;
    void shadowOffset;
    void shadowOpacity;
    void shadowRadius;
    void shadowView;
}

- (void).cxx_destruct;
- (void)ambientEditingCollectionViewController:(id)arg1 didUpdatePosterConfiguration:(id)arg2;
- (void)ambientEditingCollectionViewControllerDidUpdatePosters:(id)arg1;
- (void)ambientPosterViewController:(id)arg1 relinquishExtensionInstanceIdentifier:(id)arg2;
- (id)ambientPosterViewControllerRequestExtensionInstanceIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
