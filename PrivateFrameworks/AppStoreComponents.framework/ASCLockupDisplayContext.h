
@interface ASCLockupDisplayContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _headingKind;
}

@property (nonatomic, readonly, retain) NSString *headingKind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)headingKind;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeadingKind:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
