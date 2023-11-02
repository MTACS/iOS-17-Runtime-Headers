
@protocol CBXpcConnectionDelegate <NSObject>

@required

- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(NSDictionary *)arg2;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end
