
@interface PHAForcedHighlightEnrichmentTask : PHAHighlightEnrichmentTask

- (id)_highlightUUIDsNeedingForceEnrichmentInPhotoLibrary:(id)arg1;
- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (unsigned long long)tailorOptions;
- (void)timeoutFatal:(bool)arg1;

@end
