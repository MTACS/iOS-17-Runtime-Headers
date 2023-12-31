
@protocol SFKeyDerivingOperation <NSObject, NSCopying, NSSecureCoding>

@required

+ (long long)keySource;

- (_SFSymmetricKey *)deriveKeyWithSpecifier:(_SFSymmetricKeySpecifier *)arg1 fromKeySource:(id)arg2 error:(id*)arg3;

@end
