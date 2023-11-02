
@protocol HDOntologyDatabaseAvailabilityObserver <NSObject>

@required

- (void)ontologyDatabase:(HDOntologyDatabase *)arg1 didBecomeAvailable:(bool)arg2;

@end
