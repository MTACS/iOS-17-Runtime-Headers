
@interface PKFeatureApplicationDeclineDetails : NSObject <NSCopying, NSSecureCoding> {
    NSString * _declinedTermsIdentifier;
    NSString * _pathIdentifier;
    NSString * _pathTermsIdentifier;
}

@property (nonatomic, copy) NSString *declinedTermsIdentifier;
@property (nonatomic, copy) NSString *pathIdentifier;
@property (nonatomic, copy) NSString *pathTermsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declinedTermsIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pathIdentifier;
- (id)pathTermsIdentifier;
- (void)setDeclinedTermsIdentifier:(id)arg1;
- (void)setPathIdentifier:(id)arg1;
- (void)setPathTermsIdentifier:(id)arg1;

@end
