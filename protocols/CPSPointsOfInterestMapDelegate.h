
@protocol CPSPointsOfInterestMapDelegate <NSObject>

@required

- (void)beginPanningWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)centerMap;
- (void)zoomIn;
- (void)zoomOut;

@end
