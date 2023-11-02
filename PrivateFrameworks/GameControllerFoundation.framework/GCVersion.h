
@interface GCVersion : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _major;
    unsigned long long  _minor;
    unsigned long long  _patch;
}

@property (readonly) unsigned long long major;
@property (readonly) unsigned long long minor;
@property (readonly) unsigned long long patch;

+ (id)currentSourceVersion;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 patch:(unsigned long long)arg3;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isEqualToSourceVersion:(id)arg1;
- (bool)isGreaterThan:(id)arg1;
- (bool)isGreaterThanOrEqualTo:(id)arg1;
- (bool)isGreaterThanOrEqualToSourceVersion:(id)arg1;
- (bool)isGreaterThanSourceVersion:(id)arg1;
- (bool)isLessThan:(id)arg1;
- (bool)isLessThanOrEqualTo:(id)arg1;
- (bool)isLessThanOrEqualToSourceVersion:(id)arg1;
- (bool)isLessThanSourceVersion:(id)arg1;
- (unsigned long long)major;
- (unsigned long long)minor;
- (unsigned long long)patch;
- (id)redactedDescription;

@end
