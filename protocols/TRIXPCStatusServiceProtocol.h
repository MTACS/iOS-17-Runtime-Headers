
@protocol TRIXPCStatusServiceProtocol

@required

- (void)activeEvaluationsForBMLTWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)activeEvaluationsForMLRuntimeWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)bmltRecordsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)evaluationHistoryRecordsForMLRuntimeWithLimit:(void *)arg1 newerThanDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)experimentHistoryRecordsWithLimit:(void *)arg1 newerThanDate:(void *)arg2 privacyFilterPolicy:(void *)arg3 deploymentEnvironment:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: unsigned long long, NSDate *, unsigned char, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSArray *, NSDate *, NSError *, void*
- (void)experimentRecordsWithDeploymentEnvironments:(void *)arg1 privacyFilterPolicy:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSSet *, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rolloutAllocationStatusWithPrivacyFilterPolicy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rolloutRecordsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
