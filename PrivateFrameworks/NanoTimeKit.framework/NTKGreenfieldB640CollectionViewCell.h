
@interface NTKGreenfieldB640CollectionViewCell : UICollectionViewCell {
    UILabel * _faceNameLabel;
    UIView * _faceView;
    UIImageView * _selectedCheckImageView;
    bool  _shouldPresentCheckmark;
    UIImageView * _snapshotFaceViewForErrorState;
    UIImageView * _watchBandImageView;
}

+ (struct CGSize { double x1; double x2; })cellSizeForWatchBandImage:(id)arg1 watchFaceName:(id)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_populateWithDecodedRecipe:(id)arg1 bandImage:(id)arg2 shouldPresentFaceName:(bool)arg3 shouldPresentCheckmark:(bool)arg4 isSelected:(bool)arg5;
- (void)layoutSubviews;
- (void)prepareCellWithDecodedRecipe:(id)arg1 bandImage:(id)arg2 shouldPresentFaceName:(bool)arg3 shouldPresentCheckmark:(bool)arg4 isSelected:(bool)arg5;
- (void)prepareForReuse;
- (void)updateSeletedState:(bool)arg1;

@end
