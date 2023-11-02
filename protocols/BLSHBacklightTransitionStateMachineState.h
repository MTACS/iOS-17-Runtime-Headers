
@protocol BLSHBacklightTransitionStateMachineState <NSObject>

@required

- (NSString *)bls_loggingString;
- (NSString *)bls_shortLoggingString;
- (long long)displayMode;
- (BLSHBacklightEnvironmentPresentation *)presentation;

@end
