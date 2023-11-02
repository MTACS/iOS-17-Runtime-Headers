
@protocol _EXScene <NSObject>

@optional

- (void)connectToSession:(_EXSceneSession *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (bool)shouldAcceptConnection:(NSXPCConnection *)arg1;

@end
