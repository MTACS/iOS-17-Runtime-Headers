
@interface HMIHomePersonManagerSettings : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _faceClassificationEnabled;
}

@property (getter=isFaceClassificationEnabled) bool faceClassificationEnabled;

+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFaceClassificationEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setFaceClassificationEnabled:(bool)arg1;

@end
