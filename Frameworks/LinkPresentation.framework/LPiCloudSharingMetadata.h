
@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSharedObjectTransformer> {
    NSString * _application;
    NSString * _applicationBundleIdenfier;
    NSDictionary * _encodedTokens;
    LPImage * _icon;
    NSString * _kind;
    LPImage * _thumbnail;
    NSString * _title;
}

@property (nonatomic, copy) NSString *application;
@property (nonatomic, copy) NSString *applicationBundleIdenfier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *encodedTokens;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, copy) NSString *kind;
@property (readonly) Class superclass;
@property (nonatomic, retain) LPImage *thumbnail;
@property (nonatomic, copy) NSString *title;

+ (id)_applicationNameMap;
+ (id)_bundleIdentifierMap;
+ (id)extractApplicationFromURL:(id)arg1;
+ (id)extractKindFromURL:(id)arg1;
+ (id)extractTitleFromURL:(id)arg1;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bottomLeadingCaptionStringWithApplicationName:(id)arg1;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)_topLeadingCaptionStringWithApplicationName:(id)arg1;
- (id)application;
- (id)applicationBundleIdenfier;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)computeIcon;
- (id)computeThumbnail;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedTokens;
- (id)fallbackIconForTransformer:(id)arg1;
- (id)firstPartyAppIcon;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)localizedApplicationNameWithURL:(id)arg1;
- (id)localizedKind;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setApplicationBundleIdenfier:(id)arg1;
- (void)setEncodedTokens:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sharedObjectIconForTransformer:(id)arg1;
- (id)sharedObjectInformationForTransformer:(id)arg1;
- (bool)sharedObjectPrefersIconAsImageForTransformer:(id)arg1;
- (id)sharedObjectSubtitleForTransformer:(id)arg1;
- (id)sharedObjectTitleForTransformer:(id)arg1;
- (id)thumbnail;
- (id)title;

@end
