
@interface HKSignedClinicalDataIssuer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _subtitle;
    NSString * _title;
    NSURL * _wellKnownURL;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *wellKnownURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 wellKnownURL:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)wellKnownURL;

@end
