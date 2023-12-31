
@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int  _bindingMap;
    NSString * _identifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_identifier;
- (id)_initWithIdentifier:(id)arg1 inMap:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isBindingMapValid;
- (bool)isEqual:(id)arg1;

@end
