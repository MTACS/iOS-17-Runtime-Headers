
@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver> {
    NSArray * _possibleStates;
    NSOrderedSet * _supportedAppIdentifiers;
}

@property (nonatomic, readonly) NSOrderedSet *supportedAppIdentifiers;

- (void).cxx_destruct;
- (void)addObservers;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)possibleStatesForLocalization;
- (void)refreshInstalledApps;
- (void)removeObservers;
- (id)supportedAppIdentifiers;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
