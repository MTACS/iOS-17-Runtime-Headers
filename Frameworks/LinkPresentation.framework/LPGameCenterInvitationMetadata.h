
@interface LPGameCenterInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataBackwardCompatibility, LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer> {
    NSString * _game;
    LPImage * _icon;
    LPImage * _image;
    unsigned int  _maximumNumberOfPlayers;
    unsigned int  _minimumNumberOfPlayers;
    unsigned int  _numberOfPlayers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *game;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic) unsigned int maximumNumberOfPlayers;
@property (nonatomic) unsigned int minimumNumberOfPlayers;
@property (nonatomic) unsigned int numberOfPlayers;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)icon;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)invitationText;
- (bool)isEqual:(id)arg1;
- (unsigned int)maximumNumberOfPlayers;
- (unsigned int)minimumNumberOfPlayers;
- (unsigned int)numberOfPlayers;
- (id)playerCountText;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumNumberOfPlayers:(unsigned int)arg1;
- (void)setMinimumNumberOfPlayers:(unsigned int)arg1;
- (void)setNumberOfPlayers:(unsigned int)arg1;

@end
