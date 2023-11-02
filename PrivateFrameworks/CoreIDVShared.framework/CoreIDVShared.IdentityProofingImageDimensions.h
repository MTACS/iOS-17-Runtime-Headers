
@interface CoreIDVShared.IdentityProofingImageDimensions : NSObject <NSSecureCoding> {
    void idBack;
    void idFront;
    void selfie;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
