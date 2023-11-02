
@protocol FMDIdentifiable <NSObject, NSCopying, NSSecureCoding>

@required

- (bool)isValid;
- (NSString *)stringValue;

@end
