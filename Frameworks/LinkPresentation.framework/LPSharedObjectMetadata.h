
@interface LPSharedObjectMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataDownloadProgressTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSourceApplicationTransformer> {
    LPImage * _icon;
    NSString * _information;
    bool  _isCollaboration;
    LPSpecializationMetadata * _specialization;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, copy) NSString *information;
@property (nonatomic) bool isCollaboration;
@property (nonatomic, retain) LPSpecializationMetadata *specialization;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_applicationFromURL:(id)arg1;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)applicationIconWithURL:(id)arg1;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadProgressForTransformer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackIconForTransformer:(id)arg1;
- (id)icon;
- (id)information;
- (id)initWithCoder:(id)arg1;
- (bool)isCollaboration;
- (bool)isEqual:(id)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInformation:(id)arg1;
- (void)setIsCollaboration:(bool)arg1;
- (void)setSpecialization:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceApplicationMetadataForTransformer:(id)arg1;
- (id)specialization;
- (id)subtitle;
- (id)title;

@end
