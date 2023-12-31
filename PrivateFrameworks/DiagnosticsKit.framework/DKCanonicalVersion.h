
@interface DKCanonicalVersion : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _parts;
    NSString * _string;
}

@property (retain) NSArray *parts;
@property (nonatomic, readonly) NSString *string;

+ (id)canonicalVersionWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_parseParts:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCanonicalVersion:(id)arg1;
- (bool)isNewerThan:(id)arg1;
- (id)parts;
- (void)setParts:(id)arg1;
- (id)string;

@end
