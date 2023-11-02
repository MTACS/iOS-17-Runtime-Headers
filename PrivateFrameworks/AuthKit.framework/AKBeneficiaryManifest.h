
@interface AKBeneficiaryManifest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _accessibleBundleInformation;
    long long  _manifestOptions;
}

@property (nonatomic, readonly) NSArray *accessibleBundleInformation;
@property (nonatomic, readonly) long long manifestOptions;
@property (nonatomic, readonly) NSDictionary *parsableRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundleTypeFrom:(unsigned long long)arg1;
- (bool)_isAllOptionsSelected;
- (id)accessibleBundleInformation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleInformation:(id)arg1 manifestOptions:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (long long)manifestOptions;
- (id)parsableRepresentation;

@end
