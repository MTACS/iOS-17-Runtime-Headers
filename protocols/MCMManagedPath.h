
@protocol MCMManagedPath <NSObject, NSCopying>

@required

- (unsigned long long)ACLConfig;
- (int)dpClass;
- (unsigned long long)flags;
- (MCMFSNode *)fsNode;
- (unsigned short)mode;
- (MCMPOSIXUser *)owner;
- (<MCMManagedPath> *)parent;
- (void)setFsNode:(MCMFSNode *)arg1;
- (NSURL *)url;

@end
