
@protocol ASTConnectionStatusDelegate <NSObject>

@optional

- (void)connection:(id <ASTConnection>)arg1 connectionStateChanged:(long long)arg2;
- (void)connection:(id <ASTConnection>)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpected:(long long)arg4;

@end
