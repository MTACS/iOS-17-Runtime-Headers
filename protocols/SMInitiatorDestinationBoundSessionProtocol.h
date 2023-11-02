
@protocol SMInitiatorDestinationBoundSessionProtocol

@required

- (void)calculateDistanceToDestination:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, CLLocation *, NSError *, void*
- (void)checkEligibilityOfDestination:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, CLLocation *, NSError *, void*
- (void)estimateEtaToDestination:(void *)arg1 transportType:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 12: CLLocation *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, CLLocation *, unsigned long long, NSError *, void*

@end
