
@protocol HDAttachmentReader <NSObject>

@required

- (void)close;
- (NSData *)readDataUpToLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 error:(id*)arg3;

@end
