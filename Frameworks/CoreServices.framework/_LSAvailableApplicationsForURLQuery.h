
@interface _LSAvailableApplicationsForURLQuery : _LSQuery {
    NSURL * _URL;
}

@property (nonatomic, readonly, copy) NSURL *URL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)yieldBundles:(const void*)arg1 context:(struct LSContext { id x1; }*)arg2 block:(id /* block */)arg3;

@end
