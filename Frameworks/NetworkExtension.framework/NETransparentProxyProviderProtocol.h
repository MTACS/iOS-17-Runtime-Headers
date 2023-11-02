
@interface NETransparentProxyProviderProtocol : NETunnelProviderProtocol {
    unsigned long long  _order;
}

@property unsigned long long order;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;

@end
