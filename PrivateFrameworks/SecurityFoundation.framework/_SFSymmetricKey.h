
@interface _SFSymmetricKey : _SFKey {
    id  _symmetricKeyInternal;
}

@property (nonatomic, readonly, copy) _SFSymmetricKeySpecifier *keySpecifier;

+ (Class)_attributesClass;

- (void).cxx_destruct;
- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3;
- (id)keyData;

@end
