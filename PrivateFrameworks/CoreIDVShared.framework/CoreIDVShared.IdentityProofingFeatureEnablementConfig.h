
@interface CoreIDVShared.IdentityProofingFeatureEnablementConfig : NSObject <NSSecureCoding> {
    void isFedStatsOptinEnabled;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
