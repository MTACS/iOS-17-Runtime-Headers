
@interface WFSetSilentModeAction : WFReversibleLinkAction <WFStaccatoLinkAction>

+ (Class)settingsClientClass;

- (id)categories;
- (id)defaultParameterStatesForStaccato;
- (id)descriptionDictionary;
- (id)displayableAppDescriptor;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)arg1;
- (id)hiddenParameterKeysForStaccato;
- (id)icon;
- (id)iconSymbolName;
- (id)requiredResources;
- (id)reversibleSettingParameterKey;
- (bool)skipExecutingInSiri;
- (id)staccatoNameOverride;
- (id)subcategoryForCategory:(id)arg1;

@end
