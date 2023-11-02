
@interface LSPlugInQueryAll : LSPlugInQuery

- (bool)_remoteResolutionIsExpensive;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)arg1 error:(id*)arg2;

@end
