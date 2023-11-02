
@interface PRPosterDescriptorGalleryAssetLookupInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _lookupInfo;
}

+ (id)_assetManagerCache;
+ (id)defaultLookupInfo;
+ (id)imageCache;
+ (id)lookUpInfoForAssetCatalogIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageFromBundle:(id)arg1 displayContext:(id)arg2 error:(out id*)arg3;
- (id)init;
- (id)initWithAssetCatalogIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
