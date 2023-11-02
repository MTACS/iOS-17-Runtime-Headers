
@protocol CALNRouteHypothesizer <CADSyntheticRouteHypothesizer>

@required

- (EKTravelEngineHypothesis *)currentHypothesis;
- (void)didPostUINotification:(unsigned long long)arg1;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (unsigned long long)state;
- (void)stopHypothesizing;
- (id /* block */)updateHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end
