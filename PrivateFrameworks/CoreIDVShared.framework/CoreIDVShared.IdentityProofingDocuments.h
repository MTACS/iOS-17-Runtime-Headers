
@interface CoreIDVShared.IdentityProofingDocuments : NSObject <NSSecureCoding> {
    void backID;
    void frontID;
    void liveness;
    void selfie;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
