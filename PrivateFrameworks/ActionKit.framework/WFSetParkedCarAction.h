
@interface WFSetParkedCarAction : WFAction

- (id)contentDestinationWithError:(id*)arg1;
- (void)fetchLastParkedCarContentItemWithCompletionHandler:(id /* block */)arg1;
- (bool)locationParameterIsCurrentLocation;
- (id)missingLocationError;
- (id)resizedCompressedJPEGImageDataWithWFImage:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
