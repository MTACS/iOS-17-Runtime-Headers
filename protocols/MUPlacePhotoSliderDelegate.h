
@protocol MUPlacePhotoSliderDelegate <NSObject>

@required

- (void)photoSliderView:(MUPlacePhotoSliderView *)arg1 didTapAttribution:(MUPunchoutViewModel *)arg2;
- (void)photoSliderView:(MUPlacePhotoSliderView *)arg1 didTapViewModel:(id <MUPhotoTileViewModel>)arg2;
- (void)photoSliderViewDidTapHeaderView:(MUPlacePhotoSliderView *)arg1;

@end
