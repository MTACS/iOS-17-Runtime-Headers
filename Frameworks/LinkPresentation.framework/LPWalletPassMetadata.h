
@interface LPWalletPassMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedWithYouTransformer> {
    NSDate * _eventDate;
    NSDate * _expirationDate;
    NSString * _name;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *eventDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_subtitle;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDate;
- (id)expirationDate;
- (id)fallbackIconForTransformer:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setEventDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStyle:(long long)arg1;
- (bool)shouldDonateToSharedWithYouForTransformer:(id)arg1;
- (long long)style;

@end
