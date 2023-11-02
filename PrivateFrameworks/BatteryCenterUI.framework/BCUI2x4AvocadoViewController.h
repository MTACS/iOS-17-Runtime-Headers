
@interface BCUI2x4AvocadoViewController : BCUIAvocadoViewController

- (double)_columnWidthForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andMaxNumViews:(double)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (bool)_includeEmptyDevices;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (id)_newBatteryDeviceView;
- (void)viewWillLayoutSubviews;

@end
