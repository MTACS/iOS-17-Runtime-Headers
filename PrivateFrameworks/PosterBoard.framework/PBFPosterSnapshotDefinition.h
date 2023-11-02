
@interface PBFPosterSnapshotDefinition : PRPosterSnapshotDefinition {
    NSString * _persistenceIdentifier;
    double  _persistenceScale;
}

@property (nonatomic, readonly) double persistenceScale;
@property (nonatomic, readonly) bool shouldBePersistedOnlyTemporarily;

+ (id)defaultConfigurationDefinitions;
+ (id)defaultPreviewDefinitionForPreview:(id)arg1;
+ (id)defaultPreviewDefinitions;
+ (id)editingConfirmationDefinition;
+ (id)gallerySnapshotDefinition;
+ (id)gallerySnapshotKeyFrameDefinition;
+ (id)gallerySnapshotWithComplicationsDefinition;
+ (id)switcherFloatingLayerSnapshotDefinition;
+ (id)switcherSnapshotDefinition;
+ (id)switcherUnlockedSnapshotDefinition;

- (void).cxx_destruct;
- (id)_persistenceIdentitifer;
- (id)description;
- (id)initWithUniqueIdentifier:(id)arg1;
- (double)persistenceScale;
- (bool)shouldBePersistedOnlyTemporarily;

@end
