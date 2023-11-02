
@protocol MapsSuggestionsPredictor <NSObject, MapsSuggestionsObject>

@required

- (bool)predictedTransportModeForDestinationEntry:(void *)arg1 originCoordinate:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: MapsSuggestionsEntry *, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)predictedTransportModeForDestinationMapItem:(void *)arg1 originCoordinate:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: GEOMapItemStorage *, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@optional

- (void)cancelCapturingAnalytics;
- (void)captureActualTransportationMode:(int)arg1 originMapItem:(GEOMapItemStorage *)arg2 destinationMapItem:(GEOMapItemStorage *)arg3;
- (void)capturePredictedTransportationMode:(int)arg1;

@end
