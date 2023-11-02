
@protocol IMStateLoggable <NSObject>

@required

- (NSDictionary *)stateDictionaryForDiagnosticsRequest;

@end
