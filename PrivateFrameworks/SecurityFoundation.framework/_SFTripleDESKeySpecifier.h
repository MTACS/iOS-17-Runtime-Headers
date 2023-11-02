
@interface _SFTripleDESKeySpecifier : _SFSymmetricKeySpecifier {
    id  _tripleDESKeySpecifierInternal;
}

+ (Class)keyClass;

- (void).cxx_destruct;
- (long long)keyLengthInBytes;

@end
