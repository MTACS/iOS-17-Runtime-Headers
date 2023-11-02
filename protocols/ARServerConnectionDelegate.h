
@protocol ARServerConnectionDelegate <NSObject>

@optional

- (void)serverConnectionInterrupted:(ARServerConnection *)arg1;
- (void)serverConnectionInvalidated:(ARServerConnection *)arg1;

@end
