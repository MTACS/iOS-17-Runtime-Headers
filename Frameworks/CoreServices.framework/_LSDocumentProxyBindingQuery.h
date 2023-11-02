
@interface _LSDocumentProxyBindingQuery : _LSQuery {
    LSDocumentProxy * _documentProxy;
    NSString * _handlerRank;
    unsigned char  _style;
    bool  _yieldClaimBindings;
}

@property (nonatomic, readonly, retain) LSDocumentProxy *documentProxy;
@property (nonatomic, readonly, copy) NSString *handlerRank;
@property (nonatomic, readonly) unsigned char style;
@property (nonatomic) bool yieldClaimBindings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (id)documentProxy;
- (void)encodeWithCoder:(id)arg1;
- (void)filterOpenRestrictedBindings:(void*)arg1 connection:(id)arg2 context:(struct LSContext { id x1; }*)arg3 earlyYield:(id /* block */)arg4;
- (id)handlerRank;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentProxy:(id)arg1 style:(unsigned char)arg2 handlerRank:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setYieldClaimBindings:(bool)arg1;
- (unsigned char)style;
- (bool)yieldClaimBindings;

@end
