
@interface GEOMapFeatureRunningTrackFinder : GEOMapFeatureAccessFinder

- (id)_fail:(id /* block */)arg1;
- (id)findRunningTrackFlagsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRunningTracksNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
