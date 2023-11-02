
@protocol MUPlaceInfoSectionControllerDelegate <NSObject>

@required

- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 didSelectAddMissingDataOfType:(long long)arg2;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 didSelectEditPlaceDetailsOfType:(long long)arg2;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 didTapAttribution:(_MKMapItemAttribution *)arg2;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 selectedDirectionsWithAddress:(CNLabeledValue *)arg2 forContact:(CNContact *)arg3 options:(MUPresentationOptions *)arg4;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 selectedDirectionsWithMapItem:(MKMapItem *)arg2 options:(MUPresentationOptions *)arg3;
- (void)placeInfoSectionController:(MUPlaceInfoSectionController *)arg1 selectedViewPlaceWithMapItem:(MKMapItem *)arg2 options:(MUPresentationOptions *)arg3;

@end
