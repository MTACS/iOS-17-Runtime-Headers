
@protocol MKMapsSuggestionsPredictor <NSObject>

@required

- (bool)transportModeForDestinationEntryData:(void *)arg1 originCoordinateData:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)transportModeForDestinationMapItemData:(void *)arg1 originCoordinateData:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
