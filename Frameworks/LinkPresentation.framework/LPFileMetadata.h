
@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedObjectTransformer, LPMultipleMetadataPresentationTransformer> {
    NSDate * _creationDate;
    LPImage * _icon;
    NSString * _name;
    unsigned long long  _size;
    LPImage * _smallThumbnail;
    LPImage * _thumbnail;
    NSString * _type;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) LPImage *smallThumbnail;
@property (readonly) Class superclass;
@property (nonatomic, retain) LPImage *thumbnail;
@property (nonatomic, copy) NSString *type;

+ (id)descriptionForUTI:(id)arg1;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bottomCaptionStringForTransformer:(id)arg1;
- (bool)_canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)_fileDetailStringForTransformer:(id)arg1;
- (id)_fileTypeStringForTransformer:(id)arg1;
- (id)_iconIfLoaded;
- (bool)_isImage;
- (bool)_isPlainText;
- (bool)_isWatchFace;
- (id)_nameForTransformer:(id)arg1;
- (bool)_shouldUseBackground;
- (bool)_shouldUseCircularIcon;
- (bool)_shouldUseSquareIcon;
- (id)_singleLineDescriptionForRemoteFileWithTransformer:(id)arg1;
- (id)_smallThumbnailIfLoaded;
- (id)_thumbnailIfLoaded;
- (id)_valueForKeyPathIfLoaded:(id)arg1;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackIconForTransformer:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSmallThumbnail:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setType:(id)arg1;
- (id)sharedObjectIconForTransformer:(id)arg1;
- (id)sharedObjectInformationForTransformer:(id)arg1;
- (bool)sharedObjectPrefersIconAsImageForTransformer:(id)arg1;
- (id)sharedObjectPreviewSummaryForTransformer:(id)arg1;
- (id)sharedObjectSubtitleForTransformer:(id)arg1;
- (id)sharedObjectTitleForTransformer:(id)arg1;
- (unsigned long long)size;
- (id)smallThumbnail;
- (long long)summaryTypeForTransformer:(id)arg1;
- (id)thumbnail;
- (id)type;

@end
