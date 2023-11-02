
@interface MCMXPCMessageUserManagedAssetsPath : MCMXPCMessageWithContainerBase <MCMParametersUserManagedAssetsPath> {
    bool  _createIfNecessary;
    bool  _relative;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) bool createIfNecessary;
@property (getter=isRelative, nonatomic, readonly) bool relative;

- (bool)createIfNecessary;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (bool)isRelative;

@end
