
@interface CoreIDVShared.IdentityDocument : NSObject <NSSecureCoding> {
    void image;
    void imageMetrics;
    void pdf417Data;
    void scanMetrics;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
