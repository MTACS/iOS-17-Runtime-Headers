
@protocol SLGLogClient <NSObject>

@required

- (void)didReceiveInitialLogMessageFromDomain:(NSString *)arg1;
- (void)serverDidReset;

@end
