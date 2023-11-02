
@protocol SYStateLoggable <NSObject>

@required

- (PBCodable *)stateForLogging;

@end
