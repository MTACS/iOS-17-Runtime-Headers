
@interface VisionCoreProcessingDescriptor : VisionCoreDescriptor {
    VisionCoreProcessingDescriptorSpecifier * _specifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) VisionCoreProcessingDescriptorSpecifier *specifier;
@property (nonatomic, readonly) VisionCoreResourceVersion *version;

+ (id)URLForResourceNamed:(id)arg1 error:(id*)arg2;
+ (id)availableIdentifiers;
+ (id)availableVersionsForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)descriptorForIdentifier:(id)arg1 version:(id)arg2 error:(id*)arg3;
+ (id)descriptorForSpecifier:(id)arg1 error:(id*)arg2;
+ (id)descriptorsForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)resourcesBundle;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)specifier;
- (id)version;

@end
