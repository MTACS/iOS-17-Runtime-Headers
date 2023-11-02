
@protocol EKSerializer

@required

- (EKEvent *)deserializeData:(NSData *)arg1 isNew:(id*)arg2 error:(id*)arg3;
- (NSData *)serializeEvent:(EKEvent *)arg1 error:(id*)arg2;
- (NSString *)version;
- (NSString *)versionFromData:(NSData *)arg1 error:(id*)arg2;

@end
