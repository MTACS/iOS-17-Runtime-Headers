
@interface _SFSymmetricKeySpecifier : _SFKeySpecifier {
    id  _symmetricKeySpecifierInternal;
}

@property (nonatomic, readonly) long long keyLengthInBytes;

- (void).cxx_destruct;
- (long long)keyLengthInBytes;

@end
