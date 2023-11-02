
@interface HRSSupportedFHIRRelease : NSObject <NSCopying, NSSecureCoding> {
    NSString * _FHIRRelease;
    NSSet * _resourceTypes;
}

@property (nonatomic, readonly, copy) NSString *FHIRRelease;
@property (nonatomic, readonly, copy) NSSet *resourceTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRRelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFHIRRelease:(id)arg1 resourceTypes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)resourceTypes;

@end
