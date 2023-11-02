
@interface LPiTunesMediaSoftwareMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataStoreTransformer> {
    NSString * _genre;
    LPImage * _icon;
    bool  _isMessagesOnlyApp;
    LPImage * _messagesAppIcon;
    NSString * _name;
    NSString * _platform;
    LPVideo * _previewVideo;
    NSArray * _screenshots;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
    NSString * _subtitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *genre;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic) bool isMessagesOnlyApp;
@property (nonatomic, retain) LPImage *messagesAppIcon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, retain) LPVideo *previewVideo;
@property (nonatomic, copy) NSArray *screenshots;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMessagesOnlyApp;
- (id)messagesAppIcon;
- (id)name;
- (id)platform;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewVideo;
- (id)screenshots;
- (void)setGenre:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsMessagesOnlyApp:(bool)arg1;
- (void)setMessagesAppIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setPreviewVideo:(id)arg1;
- (void)setScreenshots:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;
- (id)storeIdentifierForTransformer:(id)arg1;
- (id)subtitle;

@end
