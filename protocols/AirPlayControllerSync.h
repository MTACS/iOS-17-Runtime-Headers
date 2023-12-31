
@protocol AirPlayControllerSync

@required

- (id)getProperty:(NSString *)arg1 qualifier:(id)arg2 status:(int*)arg3;
- (int)performCommand:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
- (void)postEvent:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3;
- (int)setProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3;

@end
