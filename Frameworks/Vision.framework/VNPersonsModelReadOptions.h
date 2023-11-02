
@interface VNPersonsModelReadOptions : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet * _acceptableVersions;
}

@property (nonatomic, copy) NSIndexSet *acceptableVersions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptableVersions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAcceptableVersions:(id)arg1;

@end
