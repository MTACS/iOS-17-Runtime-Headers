
@interface IDSSigningKeyDiversifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _diversifier;
    NSData * _trackingPreventionSecret;
}

@property (nonatomic, retain) NSString *diversifier;
@property (nonatomic, retain) NSData *trackingPreventionSecret;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diversifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiversifier:(id)arg1 trackingPreventionSecret:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDiversifier:(id)arg1;
- (void)setTrackingPreventionSecret:(id)arg1;
- (id)trackingPreventionSecret;

@end
