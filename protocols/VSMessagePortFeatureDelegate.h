
@protocol VSMessagePortFeatureDelegate <NSObject>

@required

- (void)messagePort:(VSMessagePortFeature *)arg1 didReceiveMessage:(VSScriptMessage *)arg2;

@end
