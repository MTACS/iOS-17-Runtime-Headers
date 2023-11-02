
@interface WFPlaylistPickerParameter : WFEnumerationParameter {
    WFAppleMusicAccessResource * _appleMusicAccessResource;
    WFPlaylistSubstitutableState * _entireLibraryState;
    bool  _generatingNotifications;
    NSArray * _possibleStates;
    bool  _showLibrary;
}

@property (nonatomic, retain) WFAppleMusicAccessResource *appleMusicAccessResource;
@property (nonatomic, retain) WFPlaylistSubstitutableState *entireLibraryState;
@property (nonatomic) bool generatingNotifications;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) bool showLibrary;

+ (bool)hasPlaylistAccess;
+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (id)appleMusicAccessResource;
- (void)authorizationStatusDidChange;
- (id)defaultSerializedRepresentation;
- (id)entireLibraryState;
- (bool)generatingNotifications;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)setActionResources:(id)arg1;
- (void)setAppleMusicAccessResource:(id)arg1;
- (void)setEntireLibraryState:(id)arg1;
- (void)setGeneratingNotifications:(bool)arg1;
- (bool)showLibrary;
- (Class)singleStateClass;
- (void)updateChangeNotificationRegistration;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
