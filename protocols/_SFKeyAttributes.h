
@protocol _SFKeyAttributes <NSObject, NSCopying>

@required

+ (id)alloc;

- (NSString *)keyDomain;
- (_SFKeySpecifier *)keySpecifier;

@end
