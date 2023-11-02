
@interface HMAccessoryOwnershipToken : NSObject <NSCopying, NSSecureCoding> {
    NSData * _internalData;
}

@property (readonly, copy) NSData *internalData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)internalData;
- (bool)isEqual:(id)arg1;

@end
