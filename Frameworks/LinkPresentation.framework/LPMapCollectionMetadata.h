
@interface LPMapCollectionMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer> {
    NSArray * _addresses;
    LPImage * _darkImage;
    LPImage * _icon;
    LPImage * _image;
    NSString * _name;
    unsigned int  _numberOfItems;
    LPImage * _publisherIcon;
    NSString * _publisherName;
}

@property (nonatomic, copy) NSArray *addresses;
@property (nonatomic, retain) LPImage *darkImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int numberOfItems;
@property (nonatomic, retain) LPImage *publisherIcon;
@property (nonatomic, copy) NSString *publisherName;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bottomLine;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)_resolvedImage;
- (id)addresses;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkImage;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackIconForTransformer:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned int)numberOfItems;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)publisherIcon;
- (id)publisherName;
- (void)setAddresses:(id)arg1;
- (void)setDarkImage:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfItems:(unsigned int)arg1;
- (void)setPublisherIcon:(id)arg1;
- (void)setPublisherName:(id)arg1;

@end
