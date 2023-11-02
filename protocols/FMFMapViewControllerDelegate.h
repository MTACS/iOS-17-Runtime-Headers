
@protocol FMFMapViewControllerDelegate <NSObject>

@optional

- (CNContact *)annotationContactForHandle:(FMFHandle *)arg1;
- (bool)canSelectAnnotation:(id <MKAnnotation>)arg1;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didDeselectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didReceiveLocation:(id <MKAnnotation>)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didSelectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionDidChangeAnimated:(bool)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionWillChangeAnimated:(bool)arg2;
- (UIView *)titleViewForSelectedHandle;

@end
