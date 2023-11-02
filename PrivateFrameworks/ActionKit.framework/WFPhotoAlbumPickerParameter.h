
@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver> {
    id  _defaultSerializedRepresentation;
    bool  _includesSmartAlbum;
    WFPhotoAccessResource * _photoAccessResource;
    NSArray * _possibleStates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesSmartAlbum;
@property (nonatomic, retain) WFPhotoAccessResource *photoAccessResource;
@property (readonly) Class superclass;

+ (bool)hasPhotosAccess;
+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (bool)includesSmartAlbum;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)photoAccessResource;
- (void)photoLibraryDidChange:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)resourceAvailabilityChanged;
- (void)setActionResources:(id)arg1;
- (void)setPhotoAccessResource:(id)arg1;
- (id)sharedLibrary;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
