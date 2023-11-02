
@protocol MUTransitDeparturesSectionViewProviderUserInteractionDelegate <NSObject>

@required

- (bool)sectionViewProvider:(MUTransitDeparturesSectionViewProvider *)arg1 canSelect:(id <GEOTransitDepartureSequence>)arg2 using:(MKMapItem *)arg3;
- (void)sectionViewProvider:(MUTransitDeparturesSectionViewProvider *)arg1 didSelect:(id <MKTransitLineMarker>)arg2 using:(MUPresentationOptions *)arg3;
- (void)sectionViewProvider:(MUTransitDeparturesSectionViewProvider *)arg1 didSelectAttribution:(GEOAttribution *)arg2;
- (void)sectionViewProvider:(MUTransitDeparturesSectionViewProvider *)arg1 didSelectConnectionInfo:(id <GEOTransitConnectionInfo>)arg2;
- (void)sectionViewProvider:(MUTransitDeparturesSectionViewProvider *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 using:(MKMapItem *)arg3;
- (void)sectionViewProvider:(MUTransitDeparturesSectionViewProvider *)arg1 didSelectIncidents:(NSArray *)arg2;

@end
