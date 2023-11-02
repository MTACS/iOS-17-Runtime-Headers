
@interface _SFECPublicKey : _SFPublicKey <TPPublicKey> {
    id  _ecPublicKeyInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _SFECKeySpecifier *keySpecifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
+ (id)keyWithSubjectPublicKeyInfo:(id)arg1;

- (void).cxx_destruct;
- (id)encodeSubjectPublicKeyInfo;
- (id)performWithCCKey:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers

- (bool)checkSignature:(id)arg1 matchesData:(id)arg2;
- (id)spki;

@end
