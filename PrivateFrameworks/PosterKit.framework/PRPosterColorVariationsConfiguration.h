
@interface PRPosterColorVariationsConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    NSDictionary * _variationStorage;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *variationStorage;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariationStorage:(id)arg1 version:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)variationStorage;
- (unsigned long long)version;

@end
