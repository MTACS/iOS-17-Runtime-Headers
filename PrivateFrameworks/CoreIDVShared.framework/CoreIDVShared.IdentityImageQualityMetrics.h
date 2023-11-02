
@interface CoreIDVShared.IdentityImageQualityMetrics : NSObject <NSSecureCoding> {
    void captureMetrics;
    void inlineMetrics;
    void videoMetrics;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
