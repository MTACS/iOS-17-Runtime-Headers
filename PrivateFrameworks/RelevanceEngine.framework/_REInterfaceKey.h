
@interface _REInterfaceKey : NSObject <NSCopying> {
    Class  _c;
    Class  _cls;
    bool  _isClass;
    Protocol * _p;
    Protocol * _protocol;
}

@property (nonatomic, retain) Class cls;
@property (nonatomic, readonly) bool isProtocol;
@property (nonatomic, retain) Protocol *protocol;
@property (nonatomic, readonly) _REInterfaceKey *superclassKey;

- (void).cxx_destruct;
- (Class)cls;
- (bool)conforms:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateAutomaticProperties:(id /* block */)arg1;
- (void)enumerateConformedProperties:(id /* block */)arg1;
- (void)enumerateExposedMethods:(id /* block */)arg1;
- (void)enumerateExposedProperties:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithClass:(Class)arg1;
- (id)initWithProtocol:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProtocol;
- (id)protocol;
- (void)setCls:(Class)arg1;
- (void)setProtocol:(id)arg1;
- (id)superclassKey;

@end
