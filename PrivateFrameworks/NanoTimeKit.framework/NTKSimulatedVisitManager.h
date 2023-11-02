
@interface NTKSimulatedVisitManager : NTKVisitManager

- (id)currentVisit;
- (id)init;
- (id)previousVisit;
- (id)startVisitUpdatesWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)stopVisitUpdatesForToken:(id)arg1;

@end
