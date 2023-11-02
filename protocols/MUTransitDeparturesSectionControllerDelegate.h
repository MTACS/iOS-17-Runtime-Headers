
@protocol MUTransitDeparturesSectionControllerDelegate <NSObject>

@required

- (GEOMapServiceTraits *)traitsForTransitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1;
- (bool)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 usingMapItem:(MKMapItem *)arg3;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 didSelectAttribution:(GEOAttribution *)arg2;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 usingMapItem:(MKMapItem *)arg3;
- (void)transitDeparturesSectionController:(void *)arg1 didSelectTransitLine:(void *)arg2 usingPresentationOptions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: MUTransitDeparturesSectionController *, <MKTransitLineMarker> *, MUPresentationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 showIncidents:(NSArray *)arg2;

@end
