
@interface _SWCApplicationIdentifier : NSObject <NSCopying, NSSecureCoding, SWCRedactedDescription> {
    NSString * _bundleIdentifier;
    unsigned long long  _hash;
    NSString * _prefix;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *prefix;
@property (readonly) NSString *rawValue;
@property (getter=isValid, readonly) bool valid;

+ (bool)isCaseSensitive;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDRepresentation;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForBundleRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1;
- (bool)isValid;
- (id)prefix;
- (id)rawValue;
- (id)redactedDescription;

@end
