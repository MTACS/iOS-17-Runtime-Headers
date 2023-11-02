
@interface PBFPosterGallerySmartAlbumConfigurationViewHostCell : UICollectionViewCell {
    UIView * _hostedView;
}

@property (nonatomic, retain) UIView *hostedView;

- (void).cxx_destruct;
- (id)hostedView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHostedView:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateContent:(id /* block */)arg1;

@end
