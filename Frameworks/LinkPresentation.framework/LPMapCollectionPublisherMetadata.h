
@interface LPMapCollectionPublisherMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer> {
    LPImage * _icon;
    NSString * _name;
    unsigned int  _numberOfPublishedCollections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int numberOfPublishedCollections;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)_guideCount;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackIconForTransformer:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned int)numberOfPublishedCollections;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfPublishedCollections:(unsigned int)arg1;

@end
