
@interface _SFECKeyPair : _SFKeyPair <TPKeyPair> {
    id  _ecKeyPairInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _SFECKeySpecifier *keySpecifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;

- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2;
- (id)performWithCCKey:(id /* block */)arg1;
- (id)publicKey;

// Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers

- (id)signatureForData:(id)arg1 withError:(id*)arg2;

@end
