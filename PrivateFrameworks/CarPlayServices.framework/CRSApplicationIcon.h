
@interface CRSApplicationIcon : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSData * _iconImageData;
    double  _iconImageScale;
    NSString * _localizedDisplayName;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSData *iconImageData;
@property (nonatomic) double iconImageScale;
@property (nonatomic, retain) NSString *localizedDisplayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconImageData;
- (double)iconImageScale;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDisplayName;
- (void)setIconImageData:(id)arg1;
- (void)setIconImageScale:(double)arg1;
- (void)setLocalizedDisplayName:(id)arg1;

@end
