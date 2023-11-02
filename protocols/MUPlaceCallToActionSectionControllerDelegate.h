
@protocol MUPlaceCallToActionSectionControllerDelegate <NSObject>

@required

- (void)presentAddPhotosWithPresentationOptions:(MUPresentationOptions *)arg1 entryPoint:(long long)arg2 originTarget:(NSString *)arg3;
- (void)presentPOIEnrichmentWithPresentationOptions:(MUPresentationOptions *)arg1;
- (UIView *)suggestionViewForCallToActionSectionController:(MUCallToActionSectionController *)arg1;

@end
