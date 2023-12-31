
@interface LSPlugInQueryWithURL : LSPlugInQuery {
    NSURL * _bundleURL;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundleURL;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_initWithURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
