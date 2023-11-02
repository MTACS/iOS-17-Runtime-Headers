
@interface LPPasswordsInviteMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedWithYouTransformer> {
    NSString * _buttonTitle;
    NSString * _groupName;
    LPImage * _icon;
    NSString * _subtitle;
    NSString * _title;
    NSString * _urlParameters;
}

@property (nonatomic, copy) NSString *buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *urlParameters;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_disallowsURLOverrideByDelegate;
- (id)_subtitle;
- (id)buttonTitle;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrlParameters:(id)arg1;
- (bool)shouldDonateToSharedWithYouForTransformer:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)urlParameters;

@end
