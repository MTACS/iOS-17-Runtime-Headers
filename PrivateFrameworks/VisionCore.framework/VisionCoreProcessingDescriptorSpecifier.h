
@interface VisionCoreProcessingDescriptorSpecifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    VisionCoreResourceVersion * _version;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) VisionCoreResourceVersion *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)version;

@end
