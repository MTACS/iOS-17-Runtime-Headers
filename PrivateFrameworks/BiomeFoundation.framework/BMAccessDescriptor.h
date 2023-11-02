
@interface BMAccessDescriptor : NSObject <NSCopying> {
    unsigned long long  _domain;
    unsigned long long  _mode;
    BMResourceSpecifier * _resource;
}

@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) BMResourceSpecifier *resource;

- (void).cxx_destruct;
- (id)accessDescriptorWithAccessMode:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)domain;
- (unsigned long long)hash;
- (id)initWithDomain:(unsigned long long)arg1 accessMode:(unsigned long long)arg2 resource:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mode;
- (id)resource;

@end
