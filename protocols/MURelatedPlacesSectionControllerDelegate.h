
@protocol MURelatedPlacesSectionControllerDelegate <NSObject>

@required

- (void)relatedPlaceSectionController:(MURelatedPlacesSectionController *)arg1 itemSelected:(MKMapItem *)arg2;
- (void)relatedPlaceSectionController:(MURelatedPlacesSectionController *)arg1 showSeeAllWithTitle:(NSString *)arg2 relatedMapItems:(NSArray *)arg3 originalMapItem:(MKMapItem *)arg4;

@end
