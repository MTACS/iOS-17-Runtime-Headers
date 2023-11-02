
@protocol _OSInactivityPredictionProtocol_Private <_OSInactivityPredictionProtocol>

@required

- (void)backedUpDataWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)fixModelOutput:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: _OSInactivityPredictorOutput *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)longInactivityPredictionResultAtDate:(void *)arg1 withTimeSinceInactive:(void *)arg2 withOptions:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: NSDate *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _OSInactivityPredictorOutput *, NSError *, void*
- (void)overrideRecommendedWaitTimeTo:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)restoreInactivityModelWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)restoreRecommendedWaitTimeWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)unfixModelOutputWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@end
