
@protocol SFSigningOperation <NSObject, NSCopying, NSSecureCoding>

@required

- (_SFSignedData *)sign:(NSData *)arg1 withKey:(_SFKey *)arg2 error:(id*)arg3;
- (_SFKeySpecifier *)signingKeySpecifier;
- (NSData *)verify:(_SFSignedData *)arg1 withKey:(_SFKey *)arg2 error:(id*)arg3;

@end
