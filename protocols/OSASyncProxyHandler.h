
@protocol OSASyncProxyHandler <NSObject>

@required

- (void)ack:(NSString *)arg1 result:(bool)arg2 error:(NSError *)arg3;
- (void)handleFile:(NSURL *)arg1 from:(NSString *)arg2 metadata:(NSDictionary *)arg3;
- (void)handleMessage:(NSDictionary *)arg1 from:(NSString *)arg2;

@optional

- (void)handleConnection:(bool)arg1 from:(NSString *)arg2;

@end
