
@protocol CPSEntityActionDelegate <NSObject>

@required

- (bool)entityContentViewController:(CPSBaseEntityContentViewController *)arg1 didPressButton:(CPSButton *)arg2 forEntity:(CPEntity *)arg3;
- (bool)entityContentViewController:(CPSBaseEntityContentViewController *)arg1 didPressButton:(CPSButton *)arg2 forPOI:(CPPointOfInterest *)arg3;
- (bool)entityContentViewController:(CPSBaseEntityContentViewController *)arg1 didSelectPointOfInterestWithIdentifier:(NSUUID *)arg2;
- (bool)entityContentViewController:(CPSBaseEntityContentViewController *)arg1 regionDidChange:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
