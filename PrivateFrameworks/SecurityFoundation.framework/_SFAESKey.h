
@interface _SFAESKey : _SFSymmetricKey {
    id  _aesKeyInternal;
}

@property (nonatomic, readonly, copy) _SFAESKeySpecifier *keySpecifier;

- (void).cxx_destruct;
- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2;

@end
