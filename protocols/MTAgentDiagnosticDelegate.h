
@protocol MTAgentDiagnosticDelegate <NSObject>

@required

- (void)printDiagnostics;

@optional

- (NSDictionary *)gatherDiagnostics;

@end
