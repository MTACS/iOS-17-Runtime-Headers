
@protocol CPEntityClientTemplateDelegate <CPTemplateDelegate>

@optional

- (void)handleDidSelectPointOfInterestWithIdentifier:(NSUUID *)arg1;
- (void)handleMapRegionDidChange:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
