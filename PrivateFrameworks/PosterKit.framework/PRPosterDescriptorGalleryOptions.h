
@interface PRPosterDescriptorGalleryOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _displayStyle;
    PRPosterDescriptorGalleryAssetLookupInfo * _galleryAssetLookupInfo;
    unsigned long long  _presentationStyle;
}

@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, readonly, copy) PRPosterDescriptorGalleryAssetLookupInfo *galleryAssetLookupInfo;
@property (nonatomic, readonly) unsigned long long presentationStyle;

+ (id)galleryOptionsFromDictionaryRepresentation:(id)arg1;
+ (id)galleryOptionsWithAssetLookupInfo:(id)arg1;
+ (id)galleryOptionsWithAssetLookupInfo:(id)arg1 galleryPresentationStyle:(unsigned long long)arg2;
+ (id)galleryOptionsWithAssetLookupInfo:(id)arg1 galleryPresentationStyle:(unsigned long long)arg2 galleryDisplayStyle:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)galleryAssetLookupInfo;
- (id)initWithAssetLookupInfo:(id)arg1 galleryPresentationStyle:(unsigned long long)arg2 galleryDisplayStyle:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)presentationStyle;

@end
