
@interface MTRClusterOtaSoftwareUpdateProvider : MTRClusterOTASoftwareUpdateProvider

- (void)applyUpdateRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (void)notifyUpdateAppliedWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)queryImageWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
