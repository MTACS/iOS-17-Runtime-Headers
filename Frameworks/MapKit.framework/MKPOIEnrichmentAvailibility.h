
@interface MKPOIEnrichmentAvailibility : NSObject

+ (bool)_isMapsApplication;
+ (bool)_shouldAllowUserToAddContributionsForMapItem:(id)arg1;
+ (bool)shouldShowAddPhotoButtonOnEndOfPhotoSliderForMapItem:(id)arg1;
+ (bool)shouldShowAddPhotoButtonOnMorePhotosGalleryForMapItem:(id)arg1 usingAttributionsByProviderIds:(id)arg2;
+ (bool)shouldShowAddPhotoButtonsOnSingleFullScreenPhotoViewerForMapItem:(id)arg1 photoAttribution:(id)arg2;
+ (bool)shouldShowAppleRatingsForMapItem:(id)arg1;
+ (bool)shouldShowCallToActionForMapItem:(id)arg1;
+ (bool)shouldShowCallToActionForMapItem:(id)arg1 options:(unsigned long long)arg2;
+ (bool)shouldShowMorePhotosGalleryForMapItem:(id)arg1;
+ (bool)shouldShowPhotosCallToActionForMapItem:(id)arg1;
+ (bool)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:(id)arg1;
+ (bool)shouldShowRatingsCallToActionForMapItem:(id)arg1;
+ (bool)shouldShowReportAnIssueOnPhotoGalleryForMapItem:(id)arg1 photoAttribution:(id)arg2;

@end
