
@protocol SyndromeHandlerProtocol <NSObject>

@required

+ (<SyndromeHandlerProtocol> *)getHandlerByName:(NSString *)arg1;

- (void)didReceiveSyndrome:(DecisionDetails *)arg1;

@end
