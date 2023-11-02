
@protocol SYBacklinkMonitorServiceProtocol <NSObject>

@required

- (oneway void)activeUserActivityDidChange:(void *)arg1 context:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SYUserActivityIdentifierInfo *, SYActivityObserverContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)indicatorCoverageWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (oneway void)setIndicatorCoverage:(NSNumber *)arg1;

@end
