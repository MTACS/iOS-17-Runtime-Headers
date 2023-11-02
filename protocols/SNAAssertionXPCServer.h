
@protocol SNAAssertionXPCServer

@required

- (NSData *)acquire:(NSData *)arg1 error:(out id*)arg2;
- (bool)invalidate:(NSData *)arg1 error:(out id*)arg2;
- (NSData *)reconnect:(NSData *)arg1 error:(out id*)arg2;

@end
