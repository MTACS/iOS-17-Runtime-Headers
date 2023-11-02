
@interface DDSServerConfiguration : NSObject <NSCopying> {
    NSURL * _assertionStorageDirectoryURL;
    NSString * _xpcServiceName;
}

@property (readonly, copy) NSURL *assertionStorageDirectoryURL;
@property (readonly, copy) NSString *xpcServiceName;

- (void).cxx_destruct;
- (id)assertionStorageDirectoryURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithXPCServiceName:(id)arg1 assertionStorageDirectoryURL:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)xpcServiceName;

@end
