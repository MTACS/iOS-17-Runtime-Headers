
@interface MCMXPCMessageDeleteUserManagedAsset : MCMXPCMessageWithContainerBase <MCMParametersDeleteUserManagedAsset> {
    NSString * _sourceRelativePath;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) NSString *sourceRelativePath;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (id)sourceRelativePath;

@end
