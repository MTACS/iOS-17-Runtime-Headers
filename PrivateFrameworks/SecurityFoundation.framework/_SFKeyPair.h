
@interface _SFKeyPair : _SFKey {
    id  _keyPairInternal;
}

@property (nonatomic, readonly, copy) NSString *privateKeyDomain;
@property (nonatomic, readonly) _SFPublicKey *publicKey;
@property (getter=_secKey, nonatomic, readonly) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*secKey;

+ (Class)_attributesClass;
+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;

- (void).cxx_destruct;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_secKey;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3;
- (id)initWithSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (id)keyData;
- (id)privateKeyDomain;
- (id)publicKey;

@end
