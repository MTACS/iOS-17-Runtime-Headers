
@protocol HMFNetworkDiagnosticDelegate <NSObject>

@optional

- (void)diagnostic:(HMFNetworkDiagnostic *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)diagnostic:(HMFNetworkDiagnostic *)arg1 didStartWithDevice:(HMFNetworkService *)arg2;

@end
