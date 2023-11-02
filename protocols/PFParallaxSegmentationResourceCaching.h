
@protocol PFParallaxSegmentationResourceCaching

@required

- (bool)clearSegmentationResourceCacheWithError:(id*)arg1;
- (NSURL *)segmentationResourceURL;
- (bool)supportsSegmentationResourceCaching;
- (void)updateSegmentationResource:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSURL *, void*

@end
