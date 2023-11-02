
@interface HKSignedClinicalDataRegistryIssuerEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)title;

@end
