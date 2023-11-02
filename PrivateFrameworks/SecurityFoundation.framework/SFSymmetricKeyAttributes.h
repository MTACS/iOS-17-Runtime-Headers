
@interface SFSymmetricKeyAttributes : NSObject <SFKeychainItemAttributes, _SFKeyAttributes> {
    id  _symmetricKeyAttributesInternal;
    NSString * persistentIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *keyDomain;
@property (nonatomic, readonly, copy) _SFKeySpecifier *keySpecifier;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedLabel;
@property (nonatomic, readonly, copy) NSString *persistentIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)initWithSpecifier:(id)arg1 domain:(id)arg2;
- (id)keyDomain;
- (id)keySpecifier;
- (id)localizedDescription;
- (id)localizedLabel;
- (id)persistentIdentifier;
- (void)setKeySpecifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;

@end
