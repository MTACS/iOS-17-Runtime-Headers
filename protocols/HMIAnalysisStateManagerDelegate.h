
@protocol HMIAnalysisStateManagerDelegate <NSObject>

@required

- (void)stateManager:(HMIAnalysisStateManager *)arg1 didReceiveLocalUpdate:(HMIAnalysisStateUpdate *)arg2;

@end
