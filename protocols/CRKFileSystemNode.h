
@protocol CRKFileSystemNode

@required

- (<CRKFileSystemNode> *)addChildWithDescriptor:(CRKFileSystemNodeDescriptor *)arg1;
- (NSDictionary *)children;
- (NSData *)content;
- (NSString *)fileName;
- (void)removeFromParent;
- (void)setFileName:(NSString *)arg1;
- (long long)type;
- (bool)writeToURL:(NSURL *)arg1 error:(id*)arg2;

@end
