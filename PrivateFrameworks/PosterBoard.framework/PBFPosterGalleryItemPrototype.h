
@interface PBFPosterGalleryItemPrototype : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _extensionBundleIdentifier;
    PBFPosterGalleryItemOptions * _galleryOptions;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) PBFPosterGalleryItemOptions *galleryOptions;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)galleryOptions;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 containerBundleIdentifier:(id)arg3 galleryOptions:(id)arg4;
- (id)initWithProactiveRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proactiveRepresentation;

@end
