
@interface HealthExperienceUI.DataTypeDetailFavoritesCell : UICollectionViewListCell {
    void $__lazy_storage_$_accessoryImageView;
    void $__lazy_storage_$_favoritedImage;
    void $__lazy_storage_$_notFavoritedImage;
    void item;
    void parentViewController;
    void textStyle;
}

@property (nonatomic, readonly) bool axItemIsFavorited;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (bool)axItemIsFavorited;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
