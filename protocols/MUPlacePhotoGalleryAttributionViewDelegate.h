
@protocol MUPlacePhotoGalleryAttributionViewDelegate <NSObject>

@required

- (void)attributionViewDidSelectDeletePhoto:(MUPlacePhotoGalleryAttributionView *)arg1;
- (void)attributionViewDidSelectEditPhotoCredit:(MUPlacePhotoGalleryAttributionView *)arg1;
- (void)attributionViewDidTapAttributionPunchout:(MUPlacePhotoGalleryAttributionView *)arg1;
- (void)attributionViewDidTapReportAnIssue:(MUPlacePhotoGalleryAttributionView *)arg1;

@end
