
@interface MXMSampleTag : NSObject <NSCopying, NSSecureCoding> {
    MXMSampleTag * _parent;
    NSOrderedSet * _taxonomy;
}

@property (nonatomic, readonly, copy) NSString *domainNameString;
@property (nonatomic, readonly, copy) MXMSampleTag *parent;

+ (id)ancestery;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsTag:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domainNameString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (id)initWithDNString:(id)arg1;
- (id)initWithTaxonomy:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isEqualToTag:(id)arg1;
- (id)parent;

@end
