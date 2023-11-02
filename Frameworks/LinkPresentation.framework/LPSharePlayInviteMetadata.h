
@interface LPSharePlayInviteMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataSourceApplicationTransformer> {
    NSString * _application;
    NSString * _applicationBundleIdentifier;
    LPImage * _icon;
    NSString * _title;
}

@property (nonatomic, copy) NSString *application;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)applicationNameToDisplayForBundleID:(id)arg1 fallbackName:(id)arg2;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)application;
- (id)applicationBundleIdentifier;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceApplicationMetadataForTransformer:(id)arg1;
- (id)title;

@end
