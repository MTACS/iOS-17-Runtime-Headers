
@interface _SFAsymmetricKeyAttributes : NSObject <_SFKeyAttributes> {
    NSString * _asymmetricKeyDomain;
    _SFKeySpecifier * _asymmetricKeySpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *keyDomain;
@property (nonatomic, readonly, copy) _SFKeySpecifier *keySpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)initWithSpecifier:(id)arg1 domain:(id)arg2;
- (id)keyDomain;
- (id)keySpecifier;

@end
