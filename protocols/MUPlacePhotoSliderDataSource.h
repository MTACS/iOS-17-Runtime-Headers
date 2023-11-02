
@protocol MUPlacePhotoSliderDataSource <NSObject>

@required

- (NSArray *)attributionViewModelsForPhotoSliderView:(MUPlacePhotoSliderView *)arg1;
- (unsigned long long)numberOfAttributionsForPhotoSliderView:(MUPlacePhotoSliderView *)arg1;
- (MUPhotoTileOverlay *)photoSliderView:(MUPlacePhotoSliderView *)arg1 photoOverlayForModel:(id <MUPhotoTileViewModel>)arg2;
- (UIView *)photoSliderViewHeaderViewForPhotoSlider:(MUPlacePhotoSliderView *)arg1;
- (NSArray *)photoSliderViewRequestsViewModels:(MUPlacePhotoSliderView *)arg1;

@optional

- (bool)photoSliderView:(MUPlacePhotoSliderView *)arg1 shouldShowFullWidthForModel:(id <MUPhotoTileViewModel>)arg2;

@end
