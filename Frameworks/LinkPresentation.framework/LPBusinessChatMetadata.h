
@interface LPBusinessChatMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedWithYouTransformer> {
    NSString * _subtitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (bool)shouldDonateToSharedWithYouForTransformer:(id)arg1;
- (id)subtitle;

@end
