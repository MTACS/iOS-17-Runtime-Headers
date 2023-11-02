
@protocol ARRemoteGeoTrackingTechniqueService <ARRemoteTechniqueService>

@required

- (void)getLocationFromWorldPosition:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)posteriorVisualLocalizationCallIntervalWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
- (void)setSupportEnablementOptions:(unsigned long long)arg1;
- (void)setVisualLocalizationCallInterval:(double)arg1;
- (void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
- (void)setVisualLocalizationUpdatesRequested:(bool)arg1;
- (void)supportEnablementOptionsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)visualLocalizationCallIntervalTimeThresholdWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)visualLocalizationCallIntervalWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)visualLocalizationUpdatesRequestedWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
