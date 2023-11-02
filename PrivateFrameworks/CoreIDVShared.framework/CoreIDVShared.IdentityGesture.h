
@interface CoreIDVShared.IdentityGesture : NSObject <NSSecureCoding> {
    void gesture;
    void type;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
